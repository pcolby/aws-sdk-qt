// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetresponse.h"
#include "deletedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::DeleteDatasetResponse
 * \brief The DeleteDatasetResponse class provides an interace for LookoutVision DeleteDataset responses.
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
 * \sa LookoutVisionClient::deleteDataset
 */

/*!
 * Constructs a DeleteDatasetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDatasetResponse::DeleteDatasetResponse(
        const DeleteDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutVisionResponse(new DeleteDatasetResponsePrivate(this), parent)
{
    setRequest(new DeleteDatasetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDatasetRequest * DeleteDatasetResponse::request() const
{
    Q_D(const DeleteDatasetResponse);
    return static_cast<const DeleteDatasetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutVision DeleteDataset \a response.
 */
void DeleteDatasetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutVision::DeleteDatasetResponsePrivate
 * \brief The DeleteDatasetResponsePrivate class provides private implementation for DeleteDatasetResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a DeleteDatasetResponsePrivate object with public implementation \a q.
 */
DeleteDatasetResponsePrivate::DeleteDatasetResponsePrivate(
    DeleteDatasetResponse * const q) : LookoutVisionResponsePrivate(q)
{

}

/*!
 * Parses a LookoutVision DeleteDataset response element from \a xml.
 */
void DeleteDatasetResponsePrivate::parseDeleteDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDatasetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutVision
} // namespace QtAws
