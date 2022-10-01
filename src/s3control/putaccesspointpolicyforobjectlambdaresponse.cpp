// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccesspointpolicyforobjectlambdaresponse.h"
#include "putaccesspointpolicyforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutAccessPointPolicyForObjectLambdaResponse
 * \brief The PutAccessPointPolicyForObjectLambdaResponse class provides an interace for S3Control PutAccessPointPolicyForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putAccessPointPolicyForObjectLambda
 */

/*!
 * Constructs a PutAccessPointPolicyForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
PutAccessPointPolicyForObjectLambdaResponse::PutAccessPointPolicyForObjectLambdaResponse(
        const PutAccessPointPolicyForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutAccessPointPolicyForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new PutAccessPointPolicyForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAccessPointPolicyForObjectLambdaRequest * PutAccessPointPolicyForObjectLambdaResponse::request() const
{
    Q_D(const PutAccessPointPolicyForObjectLambdaResponse);
    return static_cast<const PutAccessPointPolicyForObjectLambdaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control PutAccessPointPolicyForObjectLambda \a response.
 */
void PutAccessPointPolicyForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAccessPointPolicyForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutAccessPointPolicyForObjectLambdaResponsePrivate
 * \brief The PutAccessPointPolicyForObjectLambdaResponsePrivate class provides private implementation for PutAccessPointPolicyForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutAccessPointPolicyForObjectLambdaResponsePrivate object with public implementation \a q.
 */
PutAccessPointPolicyForObjectLambdaResponsePrivate::PutAccessPointPolicyForObjectLambdaResponsePrivate(
    PutAccessPointPolicyForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutAccessPointPolicyForObjectLambda response element from \a xml.
 */
void PutAccessPointPolicyForObjectLambdaResponsePrivate::parsePutAccessPointPolicyForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAccessPointPolicyForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
