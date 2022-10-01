// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccesspointpolicyforobjectlambdaresponse.h"
#include "deleteaccesspointpolicyforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteAccessPointPolicyForObjectLambdaResponse
 * \brief The DeleteAccessPointPolicyForObjectLambdaResponse class provides an interace for S3Control DeleteAccessPointPolicyForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteAccessPointPolicyForObjectLambda
 */

/*!
 * Constructs a DeleteAccessPointPolicyForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccessPointPolicyForObjectLambdaResponse::DeleteAccessPointPolicyForObjectLambdaResponse(
        const DeleteAccessPointPolicyForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteAccessPointPolicyForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new DeleteAccessPointPolicyForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccessPointPolicyForObjectLambdaRequest * DeleteAccessPointPolicyForObjectLambdaResponse::request() const
{
    Q_D(const DeleteAccessPointPolicyForObjectLambdaResponse);
    return static_cast<const DeleteAccessPointPolicyForObjectLambdaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteAccessPointPolicyForObjectLambda \a response.
 */
void DeleteAccessPointPolicyForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccessPointPolicyForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteAccessPointPolicyForObjectLambdaResponsePrivate
 * \brief The DeleteAccessPointPolicyForObjectLambdaResponsePrivate class provides private implementation for DeleteAccessPointPolicyForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteAccessPointPolicyForObjectLambdaResponsePrivate object with public implementation \a q.
 */
DeleteAccessPointPolicyForObjectLambdaResponsePrivate::DeleteAccessPointPolicyForObjectLambdaResponsePrivate(
    DeleteAccessPointPolicyForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteAccessPointPolicyForObjectLambda response element from \a xml.
 */
void DeleteAccessPointPolicyForObjectLambdaResponsePrivate::parseDeleteAccessPointPolicyForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccessPointPolicyForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
