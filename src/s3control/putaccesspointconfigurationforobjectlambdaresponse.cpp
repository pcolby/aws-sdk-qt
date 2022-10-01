// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccesspointconfigurationforobjectlambdaresponse.h"
#include "putaccesspointconfigurationforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutAccessPointConfigurationForObjectLambdaResponse
 * \brief The PutAccessPointConfigurationForObjectLambdaResponse class provides an interace for S3Control PutAccessPointConfigurationForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putAccessPointConfigurationForObjectLambda
 */

/*!
 * Constructs a PutAccessPointConfigurationForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
PutAccessPointConfigurationForObjectLambdaResponse::PutAccessPointConfigurationForObjectLambdaResponse(
        const PutAccessPointConfigurationForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutAccessPointConfigurationForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new PutAccessPointConfigurationForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAccessPointConfigurationForObjectLambdaRequest * PutAccessPointConfigurationForObjectLambdaResponse::request() const
{
    Q_D(const PutAccessPointConfigurationForObjectLambdaResponse);
    return static_cast<const PutAccessPointConfigurationForObjectLambdaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control PutAccessPointConfigurationForObjectLambda \a response.
 */
void PutAccessPointConfigurationForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAccessPointConfigurationForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutAccessPointConfigurationForObjectLambdaResponsePrivate
 * \brief The PutAccessPointConfigurationForObjectLambdaResponsePrivate class provides private implementation for PutAccessPointConfigurationForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutAccessPointConfigurationForObjectLambdaResponsePrivate object with public implementation \a q.
 */
PutAccessPointConfigurationForObjectLambdaResponsePrivate::PutAccessPointConfigurationForObjectLambdaResponsePrivate(
    PutAccessPointConfigurationForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutAccessPointConfigurationForObjectLambda response element from \a xml.
 */
void PutAccessPointConfigurationForObjectLambdaResponsePrivate::parsePutAccessPointConfigurationForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAccessPointConfigurationForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
