// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ssmcontactsresponse.h"
#include "ssmcontactsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::SsmContactsResponse
 * \brief The SsmContactsResponse class provides an interface for SsmContacts responses.
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a SsmContactsResponse object with parent \a parent.
 */
SsmContactsResponse::SsmContactsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SsmContactsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SsmContactsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsmContactsResponsePrivate.
 */
SsmContactsResponse::SsmContactsResponse(SsmContactsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SsmContactsResponse::parseFailure(QIODevice &response)
{
    //Q_D(SsmContactsResponse);
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
 * \class QtAws::SsmContacts::SsmContactsResponsePrivate
 * \brief The SsmContactsResponsePrivate class provides private implementation for SsmContactsResponse.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a SsmContactsResponsePrivate object with public implementation \a q.
 */
SsmContactsResponsePrivate::SsmContactsResponsePrivate(
    SsmContactsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SsmContacts
} // namespace QtAws
