// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinstancesresponse.h"
#include "listinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListInstancesResponse
 * \brief The ListInstancesResponse class provides an interace for Emr ListInstances responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listInstances
 */

/*!
 * Constructs a ListInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
ListInstancesResponse::ListInstancesResponse(
        const ListInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListInstancesResponsePrivate(this), parent)
{
    setRequest(new ListInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInstancesRequest * ListInstancesResponse::request() const
{
    Q_D(const ListInstancesResponse);
    return static_cast<const ListInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr ListInstances \a response.
 */
void ListInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::ListInstancesResponsePrivate
 * \brief The ListInstancesResponsePrivate class provides private implementation for ListInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListInstancesResponsePrivate object with public implementation \a q.
 */
ListInstancesResponsePrivate::ListInstancesResponsePrivate(
    ListInstancesResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr ListInstances response element from \a xml.
 */
void ListInstancesResponsePrivate::parseListInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
