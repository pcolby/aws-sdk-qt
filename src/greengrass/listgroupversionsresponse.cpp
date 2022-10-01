// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupversionsresponse.h"
#include "listgroupversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListGroupVersionsResponse
 * \brief The ListGroupVersionsResponse class provides an interace for Greengrass ListGroupVersions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listGroupVersions
 */

/*!
 * Constructs a ListGroupVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGroupVersionsResponse::ListGroupVersionsResponse(
        const ListGroupVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListGroupVersionsResponsePrivate(this), parent)
{
    setRequest(new ListGroupVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGroupVersionsRequest * ListGroupVersionsResponse::request() const
{
    Q_D(const ListGroupVersionsResponse);
    return static_cast<const ListGroupVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListGroupVersions \a response.
 */
void ListGroupVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGroupVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListGroupVersionsResponsePrivate
 * \brief The ListGroupVersionsResponsePrivate class provides private implementation for ListGroupVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListGroupVersionsResponsePrivate object with public implementation \a q.
 */
ListGroupVersionsResponsePrivate::ListGroupVersionsResponsePrivate(
    ListGroupVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListGroupVersions response element from \a xml.
 */
void ListGroupVersionsResponsePrivate::parseListGroupVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
