// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatacellsfilterresponse.h"
#include "createdatacellsfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::CreateDataCellsFilterResponse
 * \brief The CreateDataCellsFilterResponse class provides an interace for LakeFormation CreateDataCellsFilter responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::createDataCellsFilter
 */

/*!
 * Constructs a CreateDataCellsFilterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataCellsFilterResponse::CreateDataCellsFilterResponse(
        const CreateDataCellsFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new CreateDataCellsFilterResponsePrivate(this), parent)
{
    setRequest(new CreateDataCellsFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataCellsFilterRequest * CreateDataCellsFilterResponse::request() const
{
    Q_D(const CreateDataCellsFilterResponse);
    return static_cast<const CreateDataCellsFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation CreateDataCellsFilter \a response.
 */
void CreateDataCellsFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataCellsFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::CreateDataCellsFilterResponsePrivate
 * \brief The CreateDataCellsFilterResponsePrivate class provides private implementation for CreateDataCellsFilterResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a CreateDataCellsFilterResponsePrivate object with public implementation \a q.
 */
CreateDataCellsFilterResponsePrivate::CreateDataCellsFilterResponsePrivate(
    CreateDataCellsFilterResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation CreateDataCellsFilter response element from \a xml.
 */
void CreateDataCellsFilterResponsePrivate::parseCreateDataCellsFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataCellsFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
