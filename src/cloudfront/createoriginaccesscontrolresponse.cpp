/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createoriginaccesscontrolresponse.h"
#include "createoriginaccesscontrolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateOriginAccessControlResponse
 * \brief The CreateOriginAccessControlResponse class provides an interace for CloudFront CreateOriginAccessControl responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createOriginAccessControl
 */

/*!
 * Constructs a CreateOriginAccessControlResponse object for \a reply to \a request, with parent \a parent.
 */
CreateOriginAccessControlResponse::CreateOriginAccessControlResponse(
        const CreateOriginAccessControlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateOriginAccessControlResponsePrivate(this), parent)
{
    setRequest(new CreateOriginAccessControlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateOriginAccessControlRequest * CreateOriginAccessControlResponse::request() const
{
    Q_D(const CreateOriginAccessControlResponse);
    return static_cast<const CreateOriginAccessControlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateOriginAccessControl \a response.
 */
void CreateOriginAccessControlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateOriginAccessControlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateOriginAccessControlResponsePrivate
 * \brief The CreateOriginAccessControlResponsePrivate class provides private implementation for CreateOriginAccessControlResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateOriginAccessControlResponsePrivate object with public implementation \a q.
 */
CreateOriginAccessControlResponsePrivate::CreateOriginAccessControlResponsePrivate(
    CreateOriginAccessControlResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateOriginAccessControl response element from \a xml.
 */
void CreateOriginAccessControlResponsePrivate::parseCreateOriginAccessControlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOriginAccessControlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
