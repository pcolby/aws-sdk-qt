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

#include "getenvironmentresponse.h"
#include "getenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MWAA {

/*!
 * \class QtAws::MWAA::GetEnvironmentResponse
 * \brief The GetEnvironmentResponse class provides an interace for MWAA GetEnvironment responses.
 *
 * \inmodule QtAwsMWAA
 *
 *  <fullname>Amazon Managed Workflows for Apache Airflow</fullname>
 * 
 *  This section contains the Amazon Managed Workflows for Apache Airflow (MWAA) API reference documentation. For more
 *  information, see <a href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html">What Is Amazon
 *
 * \sa MwaaClient::getEnvironment
 */

/*!
 * Constructs a GetEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetEnvironmentResponse::GetEnvironmentResponse(
        const GetEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MwaaResponse(new GetEnvironmentResponsePrivate(this), parent)
{
    setRequest(new GetEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEnvironmentRequest * GetEnvironmentResponse::request() const
{
    return static_cast<const GetEnvironmentRequest *>(MwaaResponse::request());
}

/*!
 * \reimp
 * Parses a successful MWAA GetEnvironment \a response.
 */
void GetEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MWAA::GetEnvironmentResponsePrivate
 * \brief The GetEnvironmentResponsePrivate class provides private implementation for GetEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsMWAA
 */

/*!
 * Constructs a GetEnvironmentResponsePrivate object with public implementation \a q.
 */
GetEnvironmentResponsePrivate::GetEnvironmentResponsePrivate(
    GetEnvironmentResponse * const q) : MwaaResponsePrivate(q)
{

}

/*!
 * Parses a MWAA GetEnvironment response element from \a xml.
 */
void GetEnvironmentResponsePrivate::parseGetEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MWAA
} // namespace QtAws
