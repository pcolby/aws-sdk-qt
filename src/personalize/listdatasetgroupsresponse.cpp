// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetgroupsresponse.h"
#include "listdatasetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListDatasetGroupsResponse
 * \brief The ListDatasetGroupsResponse class provides an interace for Personalize ListDatasetGroups responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listDatasetGroups
 */

/*!
 * Constructs a ListDatasetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDatasetGroupsResponse::ListDatasetGroupsResponse(
        const ListDatasetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListDatasetGroupsResponsePrivate(this), parent)
{
    setRequest(new ListDatasetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDatasetGroupsRequest * ListDatasetGroupsResponse::request() const
{
    Q_D(const ListDatasetGroupsResponse);
    return static_cast<const ListDatasetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListDatasetGroups \a response.
 */
void ListDatasetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDatasetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListDatasetGroupsResponsePrivate
 * \brief The ListDatasetGroupsResponsePrivate class provides private implementation for ListDatasetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListDatasetGroupsResponsePrivate object with public implementation \a q.
 */
ListDatasetGroupsResponsePrivate::ListDatasetGroupsResponsePrivate(
    ListDatasetGroupsResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListDatasetGroups response element from \a xml.
 */
void ListDatasetGroupsResponsePrivate::parseListDatasetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatasetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
