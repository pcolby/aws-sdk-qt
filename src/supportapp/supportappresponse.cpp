// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "supportappresponse.h"
#include "supportappresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SupportApp {

/*!
 * \class QtAws::SupportApp::SupportAppResponse
 * \brief The SupportAppResponse class provides an interface for SupportApp responses.
 *
 * \inmodule QtAwsSupportApp
 */

/*!
 * Constructs a SupportAppResponse object with parent \a parent.
 */
SupportAppResponse::SupportAppResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SupportAppResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SupportAppResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SupportAppResponsePrivate.
 */
SupportAppResponse::SupportAppResponse(SupportAppResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SupportAppResponse::parseFailure(QIODevice &response)
{
    //Q_D(SupportAppResponse);
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
 * \class QtAws::SupportApp::SupportAppResponsePrivate
 * \brief The SupportAppResponsePrivate class provides private implementation for SupportAppResponse.
 * \internal
 *
 * \inmodule QtAwsSupportApp
 */

/*!
 * Constructs a SupportAppResponsePrivate object with public implementation \a q.
 */
SupportAppResponsePrivate::SupportAppResponsePrivate(
    SupportAppResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SupportApp
} // namespace QtAws
