// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatacellsfilterresponse.h"
#include "listdatacellsfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListDataCellsFilterResponse
 * \brief The ListDataCellsFilterResponse class provides an interace for LakeFormation ListDataCellsFilter responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::listDataCellsFilter
 */

/*!
 * Constructs a ListDataCellsFilterResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataCellsFilterResponse::ListDataCellsFilterResponse(
        const ListDataCellsFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new ListDataCellsFilterResponsePrivate(this), parent)
{
    setRequest(new ListDataCellsFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataCellsFilterRequest * ListDataCellsFilterResponse::request() const
{
    Q_D(const ListDataCellsFilterResponse);
    return static_cast<const ListDataCellsFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation ListDataCellsFilter \a response.
 */
void ListDataCellsFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataCellsFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::ListDataCellsFilterResponsePrivate
 * \brief The ListDataCellsFilterResponsePrivate class provides private implementation for ListDataCellsFilterResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListDataCellsFilterResponsePrivate object with public implementation \a q.
 */
ListDataCellsFilterResponsePrivate::ListDataCellsFilterResponsePrivate(
    ListDataCellsFilterResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation ListDataCellsFilter response element from \a xml.
 */
void ListDataCellsFilterResponsePrivate::parseListDataCellsFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataCellsFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
