// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "outpostsresponse.h"
#include "outpostsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::OutpostsResponse
 * \brief The OutpostsResponse class provides an interface for Outposts responses.
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a OutpostsResponse object with parent \a parent.
 */
OutpostsResponse::OutpostsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new OutpostsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a OutpostsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from OutpostsResponsePrivate.
 */
OutpostsResponse::OutpostsResponse(OutpostsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void OutpostsResponse::parseFailure(QIODevice &response)
{
    //Q_D(OutpostsResponse);
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
 * \class QtAws::Outposts::OutpostsResponsePrivate
 * \brief The OutpostsResponsePrivate class provides private implementation for OutpostsResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a OutpostsResponsePrivate object with public implementation \a q.
 */
OutpostsResponsePrivate::OutpostsResponsePrivate(
    OutpostsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Outposts
} // namespace QtAws
