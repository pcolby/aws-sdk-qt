// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetentriesresponse.h"
#include "listdatasetentriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::ListDatasetEntriesResponse
 * \brief The ListDatasetEntriesResponse class provides an interace for LookoutVision ListDatasetEntries responses.
 *
 * \inmodule QtAwsLookoutVision
 *
 *  This is the Amazon Lookout for Vision API Reference. It provides descriptions of actions, data types, common parameters,
 *  and common
 * 
 *  errors>
 * 
 *  Amazon Lookout for Vision enables you to find visual defects in industrial products, accurately and at scale. It uses
 *  computer vision to identify missing components in an industrial product, damage to vehicles or structures,
 *  irregularities in production lines, and even minuscule defects in silicon wafers — or any other physical item where
 *  quality is important such as a missing capacitor on printed circuit
 *
 * \sa LookoutVisionClient::listDatasetEntries
 */

/*!
 * Constructs a ListDatasetEntriesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDatasetEntriesResponse::ListDatasetEntriesResponse(
        const ListDatasetEntriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutVisionResponse(new ListDatasetEntriesResponsePrivate(this), parent)
{
    setRequest(new ListDatasetEntriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDatasetEntriesRequest * ListDatasetEntriesResponse::request() const
{
    Q_D(const ListDatasetEntriesResponse);
    return static_cast<const ListDatasetEntriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutVision ListDatasetEntries \a response.
 */
void ListDatasetEntriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDatasetEntriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutVision::ListDatasetEntriesResponsePrivate
 * \brief The ListDatasetEntriesResponsePrivate class provides private implementation for ListDatasetEntriesResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a ListDatasetEntriesResponsePrivate object with public implementation \a q.
 */
ListDatasetEntriesResponsePrivate::ListDatasetEntriesResponsePrivate(
    ListDatasetEntriesResponse * const q) : LookoutVisionResponsePrivate(q)
{

}

/*!
 * Parses a LookoutVision ListDatasetEntries response element from \a xml.
 */
void ListDatasetEntriesResponsePrivate::parseListDatasetEntriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatasetEntriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutVision
} // namespace QtAws
