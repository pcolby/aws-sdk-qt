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

#include "listpackagingconfigurationsresponse.h"
#include "listpackagingconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::ListPackagingConfigurationsResponse
 * \brief The ListPackagingConfigurationsResponse class provides an interace for MediaPackageVod ListPackagingConfigurations responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::listPackagingConfigurations
 */

/*!
 * Constructs a ListPackagingConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPackagingConfigurationsResponse::ListPackagingConfigurationsResponse(
        const ListPackagingConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new ListPackagingConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListPackagingConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPackagingConfigurationsRequest * ListPackagingConfigurationsResponse::request() const
{
    Q_D(const ListPackagingConfigurationsResponse);
    return static_cast<const ListPackagingConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod ListPackagingConfigurations \a response.
 */
void ListPackagingConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPackagingConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::ListPackagingConfigurationsResponsePrivate
 * \brief The ListPackagingConfigurationsResponsePrivate class provides private implementation for ListPackagingConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a ListPackagingConfigurationsResponsePrivate object with public implementation \a q.
 */
ListPackagingConfigurationsResponsePrivate::ListPackagingConfigurationsResponsePrivate(
    ListPackagingConfigurationsResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod ListPackagingConfigurations response element from \a xml.
 */
void ListPackagingConfigurationsResponsePrivate::parseListPackagingConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPackagingConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
