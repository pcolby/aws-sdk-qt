// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
