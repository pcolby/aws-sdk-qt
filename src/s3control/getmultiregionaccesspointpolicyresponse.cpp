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

#include "getmultiregionaccesspointpolicyresponse.h"
#include "getmultiregionaccesspointpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointPolicyResponse
 * \brief The GetMultiRegionAccessPointPolicyResponse class provides an interace for S3Control GetMultiRegionAccessPointPolicy responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getMultiRegionAccessPointPolicy
 */

/*!
 * Constructs a GetMultiRegionAccessPointPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetMultiRegionAccessPointPolicyResponse::GetMultiRegionAccessPointPolicyResponse(
        const GetMultiRegionAccessPointPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetMultiRegionAccessPointPolicyResponsePrivate(this), parent)
{
    setRequest(new GetMultiRegionAccessPointPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMultiRegionAccessPointPolicyRequest * GetMultiRegionAccessPointPolicyResponse::request() const
{
    Q_D(const GetMultiRegionAccessPointPolicyResponse);
    return static_cast<const GetMultiRegionAccessPointPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetMultiRegionAccessPointPolicy \a response.
 */
void GetMultiRegionAccessPointPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMultiRegionAccessPointPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointPolicyResponsePrivate
 * \brief The GetMultiRegionAccessPointPolicyResponsePrivate class provides private implementation for GetMultiRegionAccessPointPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetMultiRegionAccessPointPolicyResponsePrivate object with public implementation \a q.
 */
GetMultiRegionAccessPointPolicyResponsePrivate::GetMultiRegionAccessPointPolicyResponsePrivate(
    GetMultiRegionAccessPointPolicyResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetMultiRegionAccessPointPolicy response element from \a xml.
 */
void GetMultiRegionAccessPointPolicyResponsePrivate::parseGetMultiRegionAccessPointPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMultiRegionAccessPointPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
