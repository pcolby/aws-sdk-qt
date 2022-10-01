// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelresponse.h"
#include "deletemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::DeleteModelResponse
 * \brief The DeleteModelResponse class provides an interace for LookoutVision DeleteModel responses.
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
 * \sa LookoutVisionClient::deleteModel
 */

/*!
 * Constructs a DeleteModelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelResponse::DeleteModelResponse(
        const DeleteModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutVisionResponse(new DeleteModelResponsePrivate(this), parent)
{
    setRequest(new DeleteModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelRequest * DeleteModelResponse::request() const
{
    Q_D(const DeleteModelResponse);
    return static_cast<const DeleteModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutVision DeleteModel \a response.
 */
void DeleteModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutVision::DeleteModelResponsePrivate
 * \brief The DeleteModelResponsePrivate class provides private implementation for DeleteModelResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a DeleteModelResponsePrivate object with public implementation \a q.
 */
DeleteModelResponsePrivate::DeleteModelResponsePrivate(
    DeleteModelResponse * const q) : LookoutVisionResponsePrivate(q)
{

}

/*!
 * Parses a LookoutVision DeleteModel response element from \a xml.
 */
void DeleteModelResponsePrivate::parseDeleteModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutVision
} // namespace QtAws
