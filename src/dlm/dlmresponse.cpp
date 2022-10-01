// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "dlmresponse.h"
#include "dlmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dlm {

/*!
 * \class QtAws::Dlm::DlmResponse
 * \brief The DlmResponse class provides an interface for Dlm responses.
 *
 * \inmodule QtAwsDlm
 */

/*!
 * Constructs a DlmResponse object with parent \a parent.
 */
DlmResponse::DlmResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DlmResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DlmResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DlmResponsePrivate.
 */
DlmResponse::DlmResponse(DlmResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DlmResponse::parseFailure(QIODevice &response)
{
    //Q_D(DlmResponse);
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
 * \class QtAws::Dlm::DlmResponsePrivate
 * \brief The DlmResponsePrivate class provides private implementation for DlmResponse.
 * \internal
 *
 * \inmodule QtAwsDlm
 */

/*!
 * Constructs a DlmResponsePrivate object with public implementation \a q.
 */
DlmResponsePrivate::DlmResponsePrivate(
    DlmResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Dlm
} // namespace QtAws
