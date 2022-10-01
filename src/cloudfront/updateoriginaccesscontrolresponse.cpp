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

#include "updateoriginaccesscontrolresponse.h"
#include "updateoriginaccesscontrolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateOriginAccessControlResponse
 * \brief The UpdateOriginAccessControlResponse class provides an interace for CloudFront UpdateOriginAccessControl responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateOriginAccessControl
 */

/*!
 * Constructs a UpdateOriginAccessControlResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateOriginAccessControlResponse::UpdateOriginAccessControlResponse(
        const UpdateOriginAccessControlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateOriginAccessControlResponsePrivate(this), parent)
{
    setRequest(new UpdateOriginAccessControlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateOriginAccessControlRequest * UpdateOriginAccessControlResponse::request() const
{
    Q_D(const UpdateOriginAccessControlResponse);
    return static_cast<const UpdateOriginAccessControlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateOriginAccessControl \a response.
 */
void UpdateOriginAccessControlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateOriginAccessControlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateOriginAccessControlResponsePrivate
 * \brief The UpdateOriginAccessControlResponsePrivate class provides private implementation for UpdateOriginAccessControlResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateOriginAccessControlResponsePrivate object with public implementation \a q.
 */
UpdateOriginAccessControlResponsePrivate::UpdateOriginAccessControlResponsePrivate(
    UpdateOriginAccessControlResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateOriginAccessControl response element from \a xml.
 */
void UpdateOriginAccessControlResponsePrivate::parseUpdateOriginAccessControlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateOriginAccessControlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
