// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
