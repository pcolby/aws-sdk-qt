// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmodelresponse.h"
#include "startmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::StartModelResponse
 * \brief The StartModelResponse class provides an interace for LookoutVision StartModel responses.
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
 * \sa LookoutVisionClient::startModel
 */

/*!
 * Constructs a StartModelResponse object for \a reply to \a request, with parent \a parent.
 */
StartModelResponse::StartModelResponse(
        const StartModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutVisionResponse(new StartModelResponsePrivate(this), parent)
{
    setRequest(new StartModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartModelRequest * StartModelResponse::request() const
{
    Q_D(const StartModelResponse);
    return static_cast<const StartModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutVision StartModel \a response.
 */
void StartModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutVision::StartModelResponsePrivate
 * \brief The StartModelResponsePrivate class provides private implementation for StartModelResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a StartModelResponsePrivate object with public implementation \a q.
 */
StartModelResponsePrivate::StartModelResponsePrivate(
    StartModelResponse * const q) : LookoutVisionResponsePrivate(q)
{

}

/*!
 * Parses a LookoutVision StartModel response element from \a xml.
 */
void StartModelResponsePrivate::parseStartModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutVision
} // namespace QtAws
