// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ssmresponse.h"
#include "ssmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::SsmResponse
 * \brief The SsmResponse class provides an interface for Ssm responses.
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a SsmResponse object with parent \a parent.
 */
SsmResponse::SsmResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SsmResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SsmResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsmResponsePrivate.
 */
SsmResponse::SsmResponse(SsmResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SsmResponse::parseFailure(QIODevice &response)
{
    //Q_D(SsmResponse);
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
 * \class QtAws::Ssm::SsmResponsePrivate
 * \brief The SsmResponsePrivate class provides private implementation for SsmResponse.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a SsmResponsePrivate object with public implementation \a q.
 */
SsmResponsePrivate::SsmResponsePrivate(
    SsmResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Ssm
} // namespace QtAws
