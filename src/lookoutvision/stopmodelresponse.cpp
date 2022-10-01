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
