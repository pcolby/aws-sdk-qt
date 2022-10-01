// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatacellsfilterresponse.h"
#include "deletedatacellsfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DeleteDataCellsFilterResponse
 * \brief The DeleteDataCellsFilterResponse class provides an interace for LakeFormation DeleteDataCellsFilter responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::deleteDataCellsFilter
 */

/*!
 * Constructs a DeleteDataCellsFilterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDataCellsFilterResponse::DeleteDataCellsFilterResponse(
        const DeleteDataCellsFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new DeleteDataCellsFilterResponsePrivate(this), parent)
{
    setRequest(new DeleteDataCellsFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDataCellsFilterRequest * DeleteDataCellsFilterResponse::request() const
{
    Q_D(const DeleteDataCellsFilterResponse);
    return static_cast<const DeleteDataCellsFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation DeleteDataCellsFilter \a response.
 */
void DeleteDataCellsFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDataCellsFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::DeleteDataCellsFilterResponsePrivate
 * \brief The DeleteDataCellsFilterResponsePrivate class provides private implementation for DeleteDataCellsFilterResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DeleteDataCellsFilterResponsePrivate object with public implementation \a q.
 */
DeleteDataCellsFilterResponsePrivate::DeleteDataCellsFilterResponsePrivate(
    DeleteDataCellsFilterResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation DeleteDataCellsFilter response element from \a xml.
 */
void DeleteDataCellsFilterResponsePrivate::parseDeleteDataCellsFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDataCellsFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
