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

#include "getblockpublicaccessconfigurationresponse.h"
#include "getblockpublicaccessconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::GetBlockPublicAccessConfigurationResponse
 * \brief The GetBlockPublicAccessConfigurationResponse class provides an interace for EMR GetBlockPublicAccessConfiguration responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::getBlockPublicAccessConfiguration
 */

/*!
 * Constructs a GetBlockPublicAccessConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBlockPublicAccessConfigurationResponse::GetBlockPublicAccessConfigurationResponse(
        const GetBlockPublicAccessConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new GetBlockPublicAccessConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBlockPublicAccessConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBlockPublicAccessConfigurationRequest * GetBlockPublicAccessConfigurationResponse::request() const
{
    return static_cast<const GetBlockPublicAccessConfigurationRequest *>(EmrResponse::request());
}

/*!
 * \reimp
 * Parses a successful EMR GetBlockPublicAccessConfiguration \a response.
 */
void GetBlockPublicAccessConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBlockPublicAccessConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::GetBlockPublicAccessConfigurationResponsePrivate
 * \brief The GetBlockPublicAccessConfigurationResponsePrivate class provides private implementation for GetBlockPublicAccessConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a GetBlockPublicAccessConfigurationResponsePrivate object with public implementation \a q.
 */
GetBlockPublicAccessConfigurationResponsePrivate::GetBlockPublicAccessConfigurationResponsePrivate(
    GetBlockPublicAccessConfigurationResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR GetBlockPublicAccessConfiguration response element from \a xml.
 */
void GetBlockPublicAccessConfigurationResponsePrivate::parseGetBlockPublicAccessConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBlockPublicAccessConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
