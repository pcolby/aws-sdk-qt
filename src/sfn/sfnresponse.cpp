// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sfnresponse.h"
#include "sfnresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sfn {

/*!
 * \class QtAws::Sfn::SfnResponse
 * \brief The SfnResponse class provides an interface for Sfn responses.
 *
 * \inmodule QtAwsSfn
 */

/*!
 * Constructs a SfnResponse object with parent \a parent.
 */
SfnResponse::SfnResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SfnResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SfnResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SfnResponsePrivate.
 */
SfnResponse::SfnResponse(SfnResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SfnResponse::parseFailure(QIODevice &response)
{
    //Q_D(SfnResponse);
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
 * \class QtAws::Sfn::SfnResponsePrivate
 * \brief The SfnResponsePrivate class provides private implementation for SfnResponse.
 * \internal
 *
 * \inmodule QtAwsSfn
 */

/*!
 * Constructs a SfnResponsePrivate object with public implementation \a q.
 */
SfnResponsePrivate::SfnResponsePrivate(
    SfnResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Sfn
} // namespace QtAws
