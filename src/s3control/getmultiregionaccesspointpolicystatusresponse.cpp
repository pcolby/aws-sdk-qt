// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
