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

#include "putblockpublicaccessconfigurationresponse.h"
#include "putblockpublicaccessconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::PutBlockPublicAccessConfigurationResponse
 * \brief The PutBlockPublicAccessConfigurationResponse class provides an interace for Emr PutBlockPublicAccessConfiguration responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::putBlockPublicAccessConfiguration
 */

/*!
 * Constructs a PutBlockPublicAccessConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBlockPublicAccessConfigurationResponse::PutBlockPublicAccessConfigurationResponse(
        const PutBlockPublicAccessConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new PutBlockPublicAccessConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBlockPublicAccessConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBlockPublicAccessConfigurationRequest * PutBlockPublicAccessConfigurationResponse::request() const
{
    Q_D(const PutBlockPublicAccessConfigurationResponse);
    return static_cast<const PutBlockPublicAccessConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr PutBlockPublicAccessConfiguration \a response.
 */
void PutBlockPublicAccessConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBlockPublicAccessConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::PutBlockPublicAccessConfigurationResponsePrivate
 * \brief The PutBlockPublicAccessConfigurationResponsePrivate class provides private implementation for PutBlockPublicAccessConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a PutBlockPublicAccessConfigurationResponsePrivate object with public implementation \a q.
 */
PutBlockPublicAccessConfigurationResponsePrivate::PutBlockPublicAccessConfigurationResponsePrivate(
    PutBlockPublicAccessConfigurationResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr PutBlockPublicAccessConfiguration response element from \a xml.
 */
void PutBlockPublicAccessConfigurationResponsePrivate::parsePutBlockPublicAccessConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBlockPublicAccessConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
