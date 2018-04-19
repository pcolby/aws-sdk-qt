/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletesecurityconfigurationresponse.h"
#include "deletesecurityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::DeleteSecurityConfigurationResponse
 * \brief The DeleteSecurityConfigurationResponse class provides an interace for EMR DeleteSecurityConfiguration responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::deleteSecurityConfiguration
 */

/*!
 * Constructs a DeleteSecurityConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSecurityConfigurationResponse::DeleteSecurityConfigurationResponse(
        const DeleteSecurityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new DeleteSecurityConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteSecurityConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSecurityConfigurationRequest * DeleteSecurityConfigurationResponse::request() const
{
    Q_D(const DeleteSecurityConfigurationResponse);
    return static_cast<const DeleteSecurityConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR DeleteSecurityConfiguration \a response.
 */
void DeleteSecurityConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSecurityConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::DeleteSecurityConfigurationResponsePrivate
 * \brief The DeleteSecurityConfigurationResponsePrivate class provides private implementation for DeleteSecurityConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a DeleteSecurityConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteSecurityConfigurationResponsePrivate::DeleteSecurityConfigurationResponsePrivate(
    DeleteSecurityConfigurationResponse * const q) : EMRResponsePrivate(q)
{

}

/*!
 * Parses a EMR DeleteSecurityConfiguration response element from \a xml.
 */
void DeleteSecurityConfigurationResponsePrivate::parseDeleteSecurityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSecurityConfigurationResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
