// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ivschatresponse.h"
#include "ivschatresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IvsChat {

/*!
 * \class QtAws::IvsChat::IvsChatResponse
 * \brief The IvsChatResponse class provides an interface for IvsChat responses.
 *
 * \inmodule QtAwsIvsChat
 */

/*!
 * Constructs a IvsChatResponse object with parent \a parent.
 */
IvsChatResponse::IvsChatResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IvsChatResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IvsChatResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IvsChatResponsePrivate.
 */
IvsChatResponse::IvsChatResponse(IvsChatResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IvsChatResponse::parseFailure(QIODevice &response)
{
    //Q_D(IvsChatResponse);
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
 * \class QtAws::IvsChat::IvsChatResponsePrivate
 * \brief The IvsChatResponsePrivate class provides private implementation for IvsChatResponse.
 * \internal
 *
 * \inmodule QtAwsIvsChat
 */

/*!
 * Constructs a IvsChatResponsePrivate object with public implementation \a q.
 */
IvsChatResponsePrivate::IvsChatResponsePrivate(
    IvsChatResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IvsChat
} // namespace QtAws
