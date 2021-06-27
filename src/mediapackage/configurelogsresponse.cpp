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

#include "configurelogsresponse.h"
#include "configurelogsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::ConfigureLogsResponse
 * \brief The ConfigureLogsResponse class provides an interace for MediaPackage ConfigureLogs responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::configureLogs
 */

/*!
 * Constructs a ConfigureLogsResponse object for \a reply to \a request, with parent \a parent.
 */
ConfigureLogsResponse::ConfigureLogsResponse(
        const ConfigureLogsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new ConfigureLogsResponsePrivate(this), parent)
{
    setRequest(new ConfigureLogsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ConfigureLogsRequest * ConfigureLogsResponse::request() const
{
    return static_cast<const ConfigureLogsRequest *>(MediaPackageResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaPackage ConfigureLogs \a response.
 */
void ConfigureLogsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ConfigureLogsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::ConfigureLogsResponsePrivate
 * \brief The ConfigureLogsResponsePrivate class provides private implementation for ConfigureLogsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a ConfigureLogsResponsePrivate object with public implementation \a q.
 */
ConfigureLogsResponsePrivate::ConfigureLogsResponsePrivate(
    ConfigureLogsResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage ConfigureLogs response element from \a xml.
 */
void ConfigureLogsResponsePrivate::parseConfigureLogsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfigureLogsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
