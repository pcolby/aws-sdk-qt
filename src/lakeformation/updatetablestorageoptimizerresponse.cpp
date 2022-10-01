// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
