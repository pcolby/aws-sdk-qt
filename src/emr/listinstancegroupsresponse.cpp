// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinstancegroupsresponse.h"
#include "listinstancegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListInstanceGroupsResponse
 * \brief The ListInstanceGroupsResponse class provides an interace for Emr ListInstanceGroups responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listInstanceGroups
 */

/*!
 * Constructs a ListInstanceGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInstanceGroupsResponse::ListInstanceGroupsResponse(
        const ListInstanceGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListInstanceGroupsResponsePrivate(this), parent)
{
    setRequest(new ListInstanceGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInstanceGroupsRequest * ListInstanceGroupsResponse::request() const
{
    Q_D(const ListInstanceGroupsResponse);
    return static_cast<const ListInstanceGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr ListInstanceGroups \a response.
 */
void ListInstanceGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInstanceGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::ListInstanceGroupsResponsePrivate
 * \brief The ListInstanceGroupsResponsePrivate class provides private implementation for ListInstanceGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListInstanceGroupsResponsePrivate object with public implementation \a q.
 */
ListInstanceGroupsResponsePrivate::ListInstanceGroupsResponsePrivate(
    ListInstanceGroupsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr ListInstanceGroups response element from \a xml.
 */
void ListInstanceGroupsResponsePrivate::parseListInstanceGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstanceGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
