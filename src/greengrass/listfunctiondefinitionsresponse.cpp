// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfunctiondefinitionsresponse.h"
#include "listfunctiondefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListFunctionDefinitionsResponse
 * \brief The ListFunctionDefinitionsResponse class provides an interace for Greengrass ListFunctionDefinitions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listFunctionDefinitions
 */

/*!
 * Constructs a ListFunctionDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFunctionDefinitionsResponse::ListFunctionDefinitionsResponse(
        const ListFunctionDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListFunctionDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListFunctionDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFunctionDefinitionsRequest * ListFunctionDefinitionsResponse::request() const
{
    Q_D(const ListFunctionDefinitionsResponse);
    return static_cast<const ListFunctionDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListFunctionDefinitions \a response.
 */
void ListFunctionDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFunctionDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListFunctionDefinitionsResponsePrivate
 * \brief The ListFunctionDefinitionsResponsePrivate class provides private implementation for ListFunctionDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListFunctionDefinitionsResponsePrivate object with public implementation \a q.
 */
ListFunctionDefinitionsResponsePrivate::ListFunctionDefinitionsResponsePrivate(
    ListFunctionDefinitionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListFunctionDefinitions response element from \a xml.
 */
void ListFunctionDefinitionsResponsePrivate::parseListFunctionDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFunctionDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
