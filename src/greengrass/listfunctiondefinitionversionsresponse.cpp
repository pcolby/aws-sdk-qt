// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfunctiondefinitionversionsresponse.h"
#include "listfunctiondefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListFunctionDefinitionVersionsResponse
 * \brief The ListFunctionDefinitionVersionsResponse class provides an interace for Greengrass ListFunctionDefinitionVersions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listFunctionDefinitionVersions
 */

/*!
 * Constructs a ListFunctionDefinitionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFunctionDefinitionVersionsResponse::ListFunctionDefinitionVersionsResponse(
        const ListFunctionDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListFunctionDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListFunctionDefinitionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFunctionDefinitionVersionsRequest * ListFunctionDefinitionVersionsResponse::request() const
{
    Q_D(const ListFunctionDefinitionVersionsResponse);
    return static_cast<const ListFunctionDefinitionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListFunctionDefinitionVersions \a response.
 */
void ListFunctionDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFunctionDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListFunctionDefinitionVersionsResponsePrivate
 * \brief The ListFunctionDefinitionVersionsResponsePrivate class provides private implementation for ListFunctionDefinitionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListFunctionDefinitionVersionsResponsePrivate object with public implementation \a q.
 */
ListFunctionDefinitionVersionsResponsePrivate::ListFunctionDefinitionVersionsResponsePrivate(
    ListFunctionDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListFunctionDefinitionVersions response element from \a xml.
 */
void ListFunctionDefinitionVersionsResponsePrivate::parseListFunctionDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFunctionDefinitionVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
