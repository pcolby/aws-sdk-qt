// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopmodelresponse.h"
#include "stopmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::StopModelResponse
 * \brief The StopModelResponse class provides an interace for LookoutVision StopModel responses.
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
 * \sa LookoutVisionClient::stopModel
 */

/*!
 * Constructs a StopModelResponse object for \a reply to \a request, with parent \a parent.
 */
StopModelResponse::StopModelResponse(
        const StopModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutVisionResponse(new StopModelResponsePrivate(this), parent)
{
    setRequest(new StopModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopModelRequest * StopModelResponse::request() const
{
    Q_D(const StopModelResponse);
    return static_cast<const StopModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutVision StopModel \a response.
 */
void StopModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutVision::StopModelResponsePrivate
 * \brief The StopModelResponsePrivate class provides private implementation for StopModelResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a StopModelResponsePrivate object with public implementation \a q.
 */
StopModelResponsePrivate::StopModelResponsePrivate(
    StopModelResponse * const q) : LookoutVisionResponsePrivate(q)
{

}

/*!
 * Parses a LookoutVision StopModel response element from \a xml.
 */
void StopModelResponsePrivate::parseStopModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutVision
} // namespace QtAws
