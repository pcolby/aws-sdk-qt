// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapikeysresponse.h"
#include "listapikeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListApiKeysResponse
 * \brief The ListApiKeysResponse class provides an interace for AppSync ListApiKeys responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listApiKeys
 */

/*!
 * Constructs a ListApiKeysResponse object for \a reply to \a request, with parent \a parent.
 */
ListApiKeysResponse::ListApiKeysResponse(
        const ListApiKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListApiKeysResponsePrivate(this), parent)
{
    setRequest(new ListApiKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListApiKeysRequest * ListApiKeysResponse::request() const
{
    Q_D(const ListApiKeysResponse);
    return static_cast<const ListApiKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync ListApiKeys \a response.
 */
void ListApiKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListApiKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::ListApiKeysResponsePrivate
 * \brief The ListApiKeysResponsePrivate class provides private implementation for ListApiKeysResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListApiKeysResponsePrivate object with public implementation \a q.
 */
ListApiKeysResponsePrivate::ListApiKeysResponsePrivate(
    ListApiKeysResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync ListApiKeys response element from \a xml.
 */
void ListApiKeysResponsePrivate::parseListApiKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApiKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
