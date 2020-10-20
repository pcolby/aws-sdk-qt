/*
    Copyright 2013-2020 Paul Colby

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

#include "deletepackagingconfigurationresponse.h"
#include "deletepackagingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::DeletePackagingConfigurationResponse
 * \brief The DeletePackagingConfigurationResponse class provides an interace for MediaPackageVod DeletePackagingConfiguration responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::deletePackagingConfiguration
 */

/*!
 * Constructs a DeletePackagingConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePackagingConfigurationResponse::DeletePackagingConfigurationResponse(
        const DeletePackagingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new DeletePackagingConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeletePackagingConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePackagingConfigurationRequest * DeletePackagingConfigurationResponse::request() const
{
    Q_D(const DeletePackagingConfigurationResponse);
    return static_cast<const DeletePackagingConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod DeletePackagingConfiguration \a response.
 */
void DeletePackagingConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePackagingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::DeletePackagingConfigurationResponsePrivate
 * \brief The DeletePackagingConfigurationResponsePrivate class provides private implementation for DeletePackagingConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a DeletePackagingConfigurationResponsePrivate object with public implementation \a q.
 */
DeletePackagingConfigurationResponsePrivate::DeletePackagingConfigurationResponsePrivate(
    DeletePackagingConfigurationResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod DeletePackagingConfiguration response element from \a xml.
 */
void DeletePackagingConfigurationResponsePrivate::parseDeletePackagingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePackagingConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
