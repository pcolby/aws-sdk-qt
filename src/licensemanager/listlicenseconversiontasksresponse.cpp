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

#include "listlicenseconversiontasksresponse.h"
#include "listlicenseconversiontasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListLicenseConversionTasksResponse
 * \brief The ListLicenseConversionTasksResponse class provides an interace for LicenseManager ListLicenseConversionTasks responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listLicenseConversionTasks
 */

/*!
 * Constructs a ListLicenseConversionTasksResponse object for \a reply to \a request, with parent \a parent.
 */
ListLicenseConversionTasksResponse::ListLicenseConversionTasksResponse(
        const ListLicenseConversionTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListLicenseConversionTasksResponsePrivate(this), parent)
{
    setRequest(new ListLicenseConversionTasksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLicenseConversionTasksRequest * ListLicenseConversionTasksResponse::request() const
{
    Q_D(const ListLicenseConversionTasksResponse);
    return static_cast<const ListLicenseConversionTasksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListLicenseConversionTasks \a response.
 */
void ListLicenseConversionTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLicenseConversionTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListLicenseConversionTasksResponsePrivate
 * \brief The ListLicenseConversionTasksResponsePrivate class provides private implementation for ListLicenseConversionTasksResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListLicenseConversionTasksResponsePrivate object with public implementation \a q.
 */
ListLicenseConversionTasksResponsePrivate::ListLicenseConversionTasksResponsePrivate(
    ListLicenseConversionTasksResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListLicenseConversionTasks response element from \a xml.
 */
void ListLicenseConversionTasksResponsePrivate::parseListLicenseConversionTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLicenseConversionTasksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
