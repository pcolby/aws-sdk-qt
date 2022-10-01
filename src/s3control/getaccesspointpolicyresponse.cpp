// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesspointpolicyresponse.h"
#include "getaccesspointpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyResponse
 * \brief The GetAccessPointPolicyResponse class provides an interace for S3Control GetAccessPointPolicy responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointPolicy
 */

/*!
 * Constructs a GetAccessPointPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessPointPolicyResponse::GetAccessPointPolicyResponse(
        const GetAccessPointPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetAccessPointPolicyResponsePrivate(this), parent)
{
    setRequest(new GetAccessPointPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessPointPolicyRequest * GetAccessPointPolicyResponse::request() const
{
    Q_D(const GetAccessPointPolicyResponse);
    return static_cast<const GetAccessPointPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetAccessPointPolicy \a response.
 */
void GetAccessPointPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessPointPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyResponsePrivate
 * \brief The GetAccessPointPolicyResponsePrivate class provides private implementation for GetAccessPointPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointPolicyResponsePrivate object with public implementation \a q.
 */
GetAccessPointPolicyResponsePrivate::GetAccessPointPolicyResponsePrivate(
    GetAccessPointPolicyResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetAccessPointPolicy response element from \a xml.
 */
void GetAccessPointPolicyResponsePrivate::parseGetAccessPointPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessPointPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
