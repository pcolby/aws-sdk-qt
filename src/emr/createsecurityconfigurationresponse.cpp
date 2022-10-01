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

#include "createsecurityconfigurationresponse.h"
#include "createsecurityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::CreateSecurityConfigurationResponse
 * \brief The CreateSecurityConfigurationResponse class provides an interace for Emr CreateSecurityConfiguration responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::createSecurityConfiguration
 */

/*!
 * Constructs a CreateSecurityConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSecurityConfigurationResponse::CreateSecurityConfigurationResponse(
        const CreateSecurityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new CreateSecurityConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateSecurityConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSecurityConfigurationRequest * CreateSecurityConfigurationResponse::request() const
{
    Q_D(const CreateSecurityConfigurationResponse);
    return static_cast<const CreateSecurityConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr CreateSecurityConfiguration \a response.
 */
void CreateSecurityConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSecurityConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::CreateSecurityConfigurationResponsePrivate
 * \brief The CreateSecurityConfigurationResponsePrivate class provides private implementation for CreateSecurityConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a CreateSecurityConfigurationResponsePrivate object with public implementation \a q.
 */
CreateSecurityConfigurationResponsePrivate::CreateSecurityConfigurationResponsePrivate(
    CreateSecurityConfigurationResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr CreateSecurityConfiguration response element from \a xml.
 */
void CreateSecurityConfigurationResponsePrivate::parseCreateSecurityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSecurityConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
