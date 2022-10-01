// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lexmodelbuildingresponse.h"
#include "lexmodelbuildingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::LexModelBuildingResponse
 * \brief The LexModelBuildingResponse class provides an interface for LexModelBuilding responses.
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a LexModelBuildingResponse object with parent \a parent.
 */
LexModelBuildingResponse::LexModelBuildingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LexModelBuildingResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LexModelBuildingResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LexModelBuildingResponsePrivate.
 */
LexModelBuildingResponse::LexModelBuildingResponse(LexModelBuildingResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LexModelBuildingResponse::parseFailure(QIODevice &response)
{
    //Q_D(LexModelBuildingResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::LexModelBuilding::LexModelBuildingResponsePrivate
 * \brief The LexModelBuildingResponsePrivate class provides private implementation for LexModelBuildingResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a LexModelBuildingResponsePrivate object with public implementation \a q.
 */
LexModelBuildingResponsePrivate::LexModelBuildingResponsePrivate(
    LexModelBuildingResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
