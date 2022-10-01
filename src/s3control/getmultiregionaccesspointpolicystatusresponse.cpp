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

#include "getmultiregionaccesspointpolicystatusresponse.h"
#include "getmultiregionaccesspointpolicystatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointPolicyStatusResponse
 * \brief The GetMultiRegionAccessPointPolicyStatusResponse class provides an interace for S3Control GetMultiRegionAccessPointPolicyStatus responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getMultiRegionAccessPointPolicyStatus
 */

/*!
 * Constructs a GetMultiRegionAccessPointPolicyStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetMultiRegionAccessPointPolicyStatusResponse::GetMultiRegionAccessPointPolicyStatusResponse(
        const GetMultiRegionAccessPointPolicyStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetMultiRegionAccessPointPolicyStatusResponsePrivate(this), parent)
{
    setRequest(new GetMultiRegionAccessPointPolicyStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMultiRegionAccessPointPolicyStatusRequest * GetMultiRegionAccessPointPolicyStatusResponse::request() const
{
    Q_D(const GetMultiRegionAccessPointPolicyStatusResponse);
    return static_cast<const GetMultiRegionAccessPointPolicyStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetMultiRegionAccessPointPolicyStatus \a response.
 */
void GetMultiRegionAccessPointPolicyStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMultiRegionAccessPointPolicyStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointPolicyStatusResponsePrivate
 * \brief The GetMultiRegionAccessPointPolicyStatusResponsePrivate class provides private implementation for GetMultiRegionAccessPointPolicyStatusResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetMultiRegionAccessPointPolicyStatusResponsePrivate object with public implementation \a q.
 */
GetMultiRegionAccessPointPolicyStatusResponsePrivate::GetMultiRegionAccessPointPolicyStatusResponsePrivate(
    GetMultiRegionAccessPointPolicyStatusResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetMultiRegionAccessPointPolicyStatus response element from \a xml.
 */
void GetMultiRegionAccessPointPolicyStatusResponsePrivate::parseGetMultiRegionAccessPointPolicyStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMultiRegionAccessPointPolicyStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
