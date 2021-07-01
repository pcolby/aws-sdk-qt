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

#include "createweblogintokenresponse.h"
#include "createweblogintokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MWAA {

/*!
 * \class QtAws::MWAA::CreateWebLoginTokenResponse
 * \brief The CreateWebLoginTokenResponse class provides an interace for MWAA CreateWebLoginToken responses.
 *
 * \inmodule QtAwsMWAA
 *
 *  <fullname>Amazon Managed Workflows for Apache Airflow</fullname>
 * 
 *  This section contains the Amazon Managed Workflows for Apache Airflow (MWAA) API reference documentation. For more
 *  information, see <a href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html">What Is Amazon
 *
 * \sa MwaaClient::createWebLoginToken
 */

/*!
 * Constructs a CreateWebLoginTokenResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWebLoginTokenResponse::CreateWebLoginTokenResponse(
        const CreateWebLoginTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MwaaResponse(new CreateWebLoginTokenResponsePrivate(this), parent)
{
    setRequest(new CreateWebLoginTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWebLoginTokenRequest * CreateWebLoginTokenResponse::request() const
{
    Q_D(const CreateWebLoginTokenResponse);
    return static_cast<const CreateWebLoginTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MWAA CreateWebLoginToken \a response.
 */
void CreateWebLoginTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWebLoginTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MWAA::CreateWebLoginTokenResponsePrivate
 * \brief The CreateWebLoginTokenResponsePrivate class provides private implementation for CreateWebLoginTokenResponse.
 * \internal
 *
 * \inmodule QtAwsMWAA
 */

/*!
 * Constructs a CreateWebLoginTokenResponsePrivate object with public implementation \a q.
 */
CreateWebLoginTokenResponsePrivate::CreateWebLoginTokenResponsePrivate(
    CreateWebLoginTokenResponse * const q) : MwaaResponsePrivate(q)
{

}

/*!
 * Parses a MWAA CreateWebLoginToken response element from \a xml.
 */
void CreateWebLoginTokenResponsePrivate::parseCreateWebLoginTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWebLoginTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MWAA
} // namespace QtAws
