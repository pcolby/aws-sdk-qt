// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaccesspointforobjectlambdaresponse.h"
#include "createaccesspointforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::CreateAccessPointForObjectLambdaResponse
 * \brief The CreateAccessPointForObjectLambdaResponse class provides an interace for S3Control CreateAccessPointForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::createAccessPointForObjectLambda
 */

/*!
 * Constructs a CreateAccessPointForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAccessPointForObjectLambdaResponse::CreateAccessPointForObjectLambdaResponse(
        const CreateAccessPointForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new CreateAccessPointForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new CreateAccessPointForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAccessPointForObjectLambdaRequest * CreateAccessPointForObjectLambdaResponse::request() const
{
    Q_D(const CreateAccessPointForObjectLambdaResponse);
    return static_cast<const CreateAccessPointForObjectLambdaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control CreateAccessPointForObjectLambda \a response.
 */
void CreateAccessPointForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAccessPointForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::CreateAccessPointForObjectLambdaResponsePrivate
 * \brief The CreateAccessPointForObjectLambdaResponsePrivate class provides private implementation for CreateAccessPointForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a CreateAccessPointForObjectLambdaResponsePrivate object with public implementation \a q.
 */
CreateAccessPointForObjectLambdaResponsePrivate::CreateAccessPointForObjectLambdaResponsePrivate(
    CreateAccessPointForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control CreateAccessPointForObjectLambda response element from \a xml.
 */
void CreateAccessPointForObjectLambdaResponsePrivate::parseCreateAccessPointForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccessPointForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
