// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesspointconfigurationforobjectlambdaresponse.h"
#include "getaccesspointconfigurationforobjectlambdaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointConfigurationForObjectLambdaResponse
 * \brief The GetAccessPointConfigurationForObjectLambdaResponse class provides an interace for S3Control GetAccessPointConfigurationForObjectLambda responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointConfigurationForObjectLambda
 */

/*!
 * Constructs a GetAccessPointConfigurationForObjectLambdaResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccessPointConfigurationForObjectLambdaResponse::GetAccessPointConfigurationForObjectLambdaResponse(
        const GetAccessPointConfigurationForObjectLambdaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetAccessPointConfigurationForObjectLambdaResponsePrivate(this), parent)
{
    setRequest(new GetAccessPointConfigurationForObjectLambdaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccessPointConfigurationForObjectLambdaRequest * GetAccessPointConfigurationForObjectLambdaResponse::request() const
{
    Q_D(const GetAccessPointConfigurationForObjectLambdaResponse);
    return static_cast<const GetAccessPointConfigurationForObjectLambdaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetAccessPointConfigurationForObjectLambda \a response.
 */
void GetAccessPointConfigurationForObjectLambdaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccessPointConfigurationForObjectLambdaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetAccessPointConfigurationForObjectLambdaResponsePrivate
 * \brief The GetAccessPointConfigurationForObjectLambdaResponsePrivate class provides private implementation for GetAccessPointConfigurationForObjectLambdaResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointConfigurationForObjectLambdaResponsePrivate object with public implementation \a q.
 */
GetAccessPointConfigurationForObjectLambdaResponsePrivate::GetAccessPointConfigurationForObjectLambdaResponsePrivate(
    GetAccessPointConfigurationForObjectLambdaResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetAccessPointConfigurationForObjectLambda response element from \a xml.
 */
void GetAccessPointConfigurationForObjectLambdaResponsePrivate::parseGetAccessPointConfigurationForObjectLambdaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccessPointConfigurationForObjectLambdaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
