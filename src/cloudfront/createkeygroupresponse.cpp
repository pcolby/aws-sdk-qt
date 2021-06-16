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

#include "createkeygroupresponse.h"
#include "createkeygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateKeyGroupResponse
 * \brief The CreateKeyGroupResponse class provides an interace for CloudFront CreateKeyGroup responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createKeyGroup
 */

/*!
 * Constructs a CreateKeyGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateKeyGroupResponse::CreateKeyGroupResponse(
        const CreateKeyGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateKeyGroupResponsePrivate(this), parent)
{
    setRequest(new CreateKeyGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateKeyGroupRequest * CreateKeyGroupResponse::request() const
{
    Q_D(const CreateKeyGroupResponse);
    return static_cast<const CreateKeyGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateKeyGroup \a response.
 */
void CreateKeyGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateKeyGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateKeyGroupResponsePrivate
 * \brief The CreateKeyGroupResponsePrivate class provides private implementation for CreateKeyGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateKeyGroupResponsePrivate object with public implementation \a q.
 */
CreateKeyGroupResponsePrivate::CreateKeyGroupResponsePrivate(
    CreateKeyGroupResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateKeyGroup response element from \a xml.
 */
void CreateKeyGroupResponsePrivate::parseCreateKeyGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateKeyGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
