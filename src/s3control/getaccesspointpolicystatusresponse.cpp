// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
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
