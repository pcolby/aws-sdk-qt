// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesspointpolicyforobjectlambdaresponse.h"
#include "getaccesspointpolicyforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyForObjectLambdaResponse
 * \brief The GetAccessPointPolicyForObjectLambdaResponse class provides an interace for S3Control GetAccessPointPolicyForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointPolicyForObjectLambda
 */

/*!
 * Constructs a GetAccessPointPolicyForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessPointPolicyForObjectLambdaResponse::GetAccessPointPolicyForObjectLambdaResponse(
        const GetAccessPointPolicyForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetAccessPointPolicyForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new GetAccessPointPolicyForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessPointPolicyForObjectLambdaRequest * GetAccessPointPolicyForObjectLambdaResponse::request() const
{
    Q_D(const GetAccessPointPolicyForObjectLambdaResponse);
    return static_cast<const GetAccessPointPolicyForObjectLambdaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetAccessPointPolicyForObjectLambda \a response.
 */
void GetAccessPointPolicyForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessPointPolicyForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyForObjectLambdaResponsePrivate
 * \brief The GetAccessPointPolicyForObjectLambdaResponsePrivate class provides private implementation for GetAccessPointPolicyForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointPolicyForObjectLambdaResponsePrivate object with public implementation \a q.
 */
GetAccessPointPolicyForObjectLambdaResponsePrivate::GetAccessPointPolicyForObjectLambdaResponsePrivate(
    GetAccessPointPolicyForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetAccessPointPolicyForObjectLambda response element from \a xml.
 */
void GetAccessPointPolicyForObjectLambdaResponsePrivate::parseGetAccessPointPolicyForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessPointPolicyForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
