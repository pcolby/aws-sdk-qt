// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "connectparticipantresponse.h"
#include "connectparticipantresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::ConnectParticipantResponse
 * \brief The ConnectParticipantResponse class provides an interface for ConnectParticipant responses.
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a ConnectParticipantResponse object with parent \a parent.
 */
ConnectParticipantResponse::ConnectParticipantResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ConnectParticipantResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ConnectParticipantResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConnectParticipantResponsePrivate.
 */
ConnectParticipantResponse::ConnectParticipantResponse(ConnectParticipantResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ConnectParticipantResponse::parseFailure(QIODevice &response)
{
    //Q_D(ConnectParticipantResponse);
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
 * \class QtAws::ConnectParticipant::ConnectParticipantResponsePrivate
 * \brief The ConnectParticipantResponsePrivate class provides private implementation for ConnectParticipantResponse.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a ConnectParticipantResponsePrivate object with public implementation \a q.
 */
ConnectParticipantResponsePrivate::ConnectParticipantResponsePrivate(
    ConnectParticipantResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ConnectParticipant
} // namespace QtAws
