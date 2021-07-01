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

#include "createclitokenresponse.h"
#include "createclitokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MWAA {

/*!
 * \class QtAws::MWAA::CreateCliTokenResponse
 * \brief The CreateCliTokenResponse class provides an interace for MWAA CreateCliToken responses.
 *
 * \inmodule QtAwsMWAA
 *
 *  <fullname>Amazon Managed Workflows for Apache Airflow</fullname>
 * 
 *  This section contains the Amazon Managed Workflows for Apache Airflow (MWAA) API reference documentation. For more
 *  information, see <a href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html">What Is Amazon
 *
 * \sa MwaaClient::createCliToken
 */

/*!
 * Constructs a CreateCliTokenResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCliTokenResponse::CreateCliTokenResponse(
        const CreateCliTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MwaaResponse(new CreateCliTokenResponsePrivate(this), parent)
{
    setRequest(new CreateCliTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCliTokenRequest * CreateCliTokenResponse::request() const
{
    Q_D(const CreateCliTokenResponse);
    return static_cast<const CreateCliTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MWAA CreateCliToken \a response.
 */
void CreateCliTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCliTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MWAA::CreateCliTokenResponsePrivate
 * \brief The CreateCliTokenResponsePrivate class provides private implementation for CreateCliTokenResponse.
 * \internal
 *
 * \inmodule QtAwsMWAA
 */

/*!
 * Constructs a CreateCliTokenResponsePrivate object with public implementation \a q.
 */
CreateCliTokenResponsePrivate::CreateCliTokenResponsePrivate(
    CreateCliTokenResponse * const q) : MwaaResponsePrivate(q)
{

}

/*!
 * Parses a MWAA CreateCliToken response element from \a xml.
 */
void CreateCliTokenResponsePrivate::parseCreateCliTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCliTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MWAA
} // namespace QtAws
