// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listactionsresponse.h"
#include "listactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::ListActionsResponse
 * \brief The ListActionsResponse class provides an interace for Fis ListActions responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::listActions
 */

/*!
 * Constructs a ListActionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListActionsResponse::ListActionsResponse(
        const ListActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new ListActionsResponsePrivate(this), parent)
{
    setRequest(new ListActionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListActionsRequest * ListActionsResponse::request() const
{
    Q_D(const ListActionsResponse);
    return static_cast<const ListActionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fis ListActions \a response.
 */
void ListActionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::ListActionsResponsePrivate
 * \brief The ListActionsResponsePrivate class provides private implementation for ListActionsResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a ListActionsResponsePrivate object with public implementation \a q.
 */
ListActionsResponsePrivate::ListActionsResponsePrivate(
    ListActionsResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis ListActions response element from \a xml.
 */
void ListActionsResponsePrivate::parseListActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListActionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
