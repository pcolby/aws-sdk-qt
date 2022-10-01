// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "emrserverlessresponse.h"
#include "emrserverlessresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace EmrServerless {

/*!
 * \class QtAws::EmrServerless::EmrServerlessResponse
 * \brief The EmrServerlessResponse class provides an interface for EmrServerless responses.
 *
 * \inmodule QtAwsEmrServerless
 */

/*!
 * Constructs a EmrServerlessResponse object with parent \a parent.
 */
EmrServerlessResponse::EmrServerlessResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EmrServerlessResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EmrServerlessResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EmrServerlessResponsePrivate.
 */
EmrServerlessResponse::EmrServerlessResponse(EmrServerlessResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EmrServerlessResponse::parseFailure(QIODevice &response)
{
    //Q_D(EmrServerlessResponse);
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
 * \class QtAws::EmrServerless::EmrServerlessResponsePrivate
 * \brief The EmrServerlessResponsePrivate class provides private implementation for EmrServerlessResponse.
 * \internal
 *
 * \inmodule QtAwsEmrServerless
 */

/*!
 * Constructs a EmrServerlessResponsePrivate object with public implementation \a q.
 */
EmrServerlessResponsePrivate::EmrServerlessResponsePrivate(
    EmrServerlessResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace EmrServerless
} // namespace QtAws
