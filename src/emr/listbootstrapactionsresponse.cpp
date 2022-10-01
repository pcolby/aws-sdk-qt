// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbootstrapactionsresponse.h"
#include "listbootstrapactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListBootstrapActionsResponse
 * \brief The ListBootstrapActionsResponse class provides an interace for Emr ListBootstrapActions responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listBootstrapActions
 */

/*!
 * Constructs a ListBootstrapActionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBootstrapActionsResponse::ListBootstrapActionsResponse(
        const ListBootstrapActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListBootstrapActionsResponsePrivate(this), parent)
{
    setRequest(new ListBootstrapActionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBootstrapActionsRequest * ListBootstrapActionsResponse::request() const
{
    Q_D(const ListBootstrapActionsResponse);
    return static_cast<const ListBootstrapActionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr ListBootstrapActions \a response.
 */
void ListBootstrapActionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBootstrapActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::ListBootstrapActionsResponsePrivate
 * \brief The ListBootstrapActionsResponsePrivate class provides private implementation for ListBootstrapActionsResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListBootstrapActionsResponsePrivate object with public implementation \a q.
 */
ListBootstrapActionsResponsePrivate::ListBootstrapActionsResponsePrivate(
    ListBootstrapActionsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr ListBootstrapActions response element from \a xml.
 */
void ListBootstrapActionsResponsePrivate::parseListBootstrapActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBootstrapActionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
