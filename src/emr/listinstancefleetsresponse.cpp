// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinstancefleetsresponse.h"
#include "listinstancefleetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListInstanceFleetsResponse
 * \brief The ListInstanceFleetsResponse class provides an interace for Emr ListInstanceFleets responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listInstanceFleets
 */

/*!
 * Constructs a ListInstanceFleetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInstanceFleetsResponse::ListInstanceFleetsResponse(
        const ListInstanceFleetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListInstanceFleetsResponsePrivate(this), parent)
{
    setRequest(new ListInstanceFleetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInstanceFleetsRequest * ListInstanceFleetsResponse::request() const
{
    Q_D(const ListInstanceFleetsResponse);
    return static_cast<const ListInstanceFleetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr ListInstanceFleets \a response.
 */
void ListInstanceFleetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInstanceFleetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::ListInstanceFleetsResponsePrivate
 * \brief The ListInstanceFleetsResponsePrivate class provides private implementation for ListInstanceFleetsResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListInstanceFleetsResponsePrivate object with public implementation \a q.
 */
ListInstanceFleetsResponsePrivate::ListInstanceFleetsResponsePrivate(
    ListInstanceFleetsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr ListInstanceFleets response element from \a xml.
 */
void ListInstanceFleetsResponsePrivate::parseListInstanceFleetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstanceFleetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
