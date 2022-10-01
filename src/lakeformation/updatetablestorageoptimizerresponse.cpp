/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatetablestorageoptimizerresponse.h"
#include "updatetablestorageoptimizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::UpdateTableStorageOptimizerResponse
 * \brief The UpdateTableStorageOptimizerResponse class provides an interace for LakeFormation UpdateTableStorageOptimizer responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::updateTableStorageOptimizer
 */

/*!
 * Constructs a UpdateTableStorageOptimizerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTableStorageOptimizerResponse::UpdateTableStorageOptimizerResponse(
        const UpdateTableStorageOptimizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new UpdateTableStorageOptimizerResponsePrivate(this), parent)
{
    setRequest(new UpdateTableStorageOptimizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTableStorageOptimizerRequest * UpdateTableStorageOptimizerResponse::request() const
{
    Q_D(const UpdateTableStorageOptimizerResponse);
    return static_cast<const UpdateTableStorageOptimizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation UpdateTableStorageOptimizer \a response.
 */
void UpdateTableStorageOptimizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTableStorageOptimizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::UpdateTableStorageOptimizerResponsePrivate
 * \brief The UpdateTableStorageOptimizerResponsePrivate class provides private implementation for UpdateTableStorageOptimizerResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a UpdateTableStorageOptimizerResponsePrivate object with public implementation \a q.
 */
UpdateTableStorageOptimizerResponsePrivate::UpdateTableStorageOptimizerResponsePrivate(
    UpdateTableStorageOptimizerResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation UpdateTableStorageOptimizer response element from \a xml.
 */
void UpdateTableStorageOptimizerResponsePrivate::parseUpdateTableStorageOptimizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTableStorageOptimizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
