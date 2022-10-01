// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexecutionsresponse.h"
#include "listexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::ListExecutionsResponse
 * \brief The ListExecutionsResponse class provides an interace for SnowDeviceManagement ListExecutions responses.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::listExecutions
 */

/*!
 * Constructs a ListExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExecutionsResponse::ListExecutionsResponse(
        const ListExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowDeviceManagementResponse(new ListExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExecutionsRequest * ListExecutionsResponse::request() const
{
    Q_D(const ListExecutionsResponse);
    return static_cast<const ListExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SnowDeviceManagement ListExecutions \a response.
 */
void ListExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SnowDeviceManagement::ListExecutionsResponsePrivate
 * \brief The ListExecutionsResponsePrivate class provides private implementation for ListExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a ListExecutionsResponsePrivate object with public implementation \a q.
 */
ListExecutionsResponsePrivate::ListExecutionsResponsePrivate(
    ListExecutionsResponse * const q) : SnowDeviceManagementResponsePrivate(q)
{

}

/*!
 * Parses a SnowDeviceManagement ListExecutions response element from \a xml.
 */
void ListExecutionsResponsePrivate::parseListExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SnowDeviceManagement
} // namespace QtAws
