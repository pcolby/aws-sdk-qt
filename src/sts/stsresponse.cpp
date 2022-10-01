// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stsresponse.h"
#include "stsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::StsResponse
 * \brief The StsResponse class provides an interface for Sts responses.
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a StsResponse object with parent \a parent.
 */
StsResponse::StsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new StsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a StsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from StsResponsePrivate.
 */
StsResponse::StsResponse(StsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void StsResponse::parseFailure(QIODevice &response)
{
    //Q_D(StsResponse);
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
 * \class QtAws::Sts::StsResponsePrivate
 * \brief The StsResponsePrivate class provides private implementation for StsResponse.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a StsResponsePrivate object with public implementation \a q.
 */
StsResponsePrivate::StsResponsePrivate(
    StsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Sts
} // namespace QtAws
