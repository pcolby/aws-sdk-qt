// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatasetentriesresponse.h"
#include "updatedatasetentriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::UpdateDatasetEntriesResponse
 * \brief The UpdateDatasetEntriesResponse class provides an interace for LookoutVision UpdateDatasetEntries responses.
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
 * \sa LookoutVisionClient::updateDatasetEntries
 */

/*!
 * Constructs a UpdateDatasetEntriesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDatasetEntriesResponse::UpdateDatasetEntriesResponse(
        const UpdateDatasetEntriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutVisionResponse(new UpdateDatasetEntriesResponsePrivate(this), parent)
{
    setRequest(new UpdateDatasetEntriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDatasetEntriesRequest * UpdateDatasetEntriesResponse::request() const
{
    Q_D(const UpdateDatasetEntriesResponse);
    return static_cast<const UpdateDatasetEntriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutVision UpdateDatasetEntries \a response.
 */
void UpdateDatasetEntriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDatasetEntriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutVision::UpdateDatasetEntriesResponsePrivate
 * \brief The UpdateDatasetEntriesResponsePrivate class provides private implementation for UpdateDatasetEntriesResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a UpdateDatasetEntriesResponsePrivate object with public implementation \a q.
 */
UpdateDatasetEntriesResponsePrivate::UpdateDatasetEntriesResponsePrivate(
    UpdateDatasetEntriesResponse * const q) : LookoutVisionResponsePrivate(q)
{

}

/*!
 * Parses a LookoutVision UpdateDatasetEntries response element from \a xml.
 */
void UpdateDatasetEntriesResponsePrivate::parseUpdateDatasetEntriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDatasetEntriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutVision
} // namespace QtAws
