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

#include "getaccesspointpolicystatusresponse.h"
#include "getaccesspointpolicystatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyStatusResponse
 * \brief The GetAccessPointPolicyStatusResponse class provides an interace for S3Control GetAccessPointPolicyStatus responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointPolicyStatus
 */

/*!
 * Constructs a GetAccessPointPolicyStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessPointPolicyStatusResponse::GetAccessPointPolicyStatusResponse(
        const GetAccessPointPolicyStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetAccessPointPolicyStatusResponsePrivate(this), parent)
{
    setRequest(new GetAccessPointPolicyStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessPointPolicyStatusRequest * GetAccessPointPolicyStatusResponse::request() const
{
    Q_D(const GetAccessPointPolicyStatusResponse);
    return static_cast<const GetAccessPointPolicyStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetAccessPointPolicyStatus \a response.
 */
void GetAccessPointPolicyStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessPointPolicyStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyStatusResponsePrivate
 * \brief The GetAccessPointPolicyStatusResponsePrivate class provides private implementation for GetAccessPointPolicyStatusResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointPolicyStatusResponsePrivate object with public implementation \a q.
 */
GetAccessPointPolicyStatusResponsePrivate::GetAccessPointPolicyStatusResponsePrivate(
    GetAccessPointPolicyStatusResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetAccessPointPolicyStatus response element from \a xml.
 */
void GetAccessPointPolicyStatusResponsePrivate::parseGetAccessPointPolicyStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessPointPolicyStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
