// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesspointpolicystatusforobjectlambdaresponse.h"
#include "getaccesspointpolicystatusforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyStatusForObjectLambdaResponse
 * \brief The GetAccessPointPolicyStatusForObjectLambdaResponse class provides an interace for S3Control GetAccessPointPolicyStatusForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointPolicyStatusForObjectLambda
 */

/*!
 * Constructs a GetAccessPointPolicyStatusForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessPointPolicyStatusForObjectLambdaResponse::GetAccessPointPolicyStatusForObjectLambdaResponse(
        const GetAccessPointPolicyStatusForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetAccessPointPolicyStatusForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new GetAccessPointPolicyStatusForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessPointPolicyStatusForObjectLambdaRequest * GetAccessPointPolicyStatusForObjectLambdaResponse::request() const
{
    Q_D(const GetAccessPointPolicyStatusForObjectLambdaResponse);
    return static_cast<const GetAccessPointPolicyStatusForObjectLambdaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetAccessPointPolicyStatusForObjectLambda \a response.
 */
void GetAccessPointPolicyStatusForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessPointPolicyStatusForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyStatusForObjectLambdaResponsePrivate
 * \brief The GetAccessPointPolicyStatusForObjectLambdaResponsePrivate class provides private implementation for GetAccessPointPolicyStatusForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointPolicyStatusForObjectLambdaResponsePrivate object with public implementation \a q.
 */
GetAccessPointPolicyStatusForObjectLambdaResponsePrivate::GetAccessPointPolicyStatusForObjectLambdaResponsePrivate(
    GetAccessPointPolicyStatusForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetAccessPointPolicyStatusForObjectLambda response element from \a xml.
 */
void GetAccessPointPolicyStatusForObjectLambdaResponsePrivate::parseGetAccessPointPolicyStatusForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessPointPolicyStatusForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
