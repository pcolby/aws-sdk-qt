/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
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
