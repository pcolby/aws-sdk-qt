// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "worklinkresponse.h"
#include "worklinkresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::WorkLinkResponse
 * \brief The WorkLinkResponse class provides an interface for WorkLink responses.
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a WorkLinkResponse object with parent \a parent.
 */
WorkLinkResponse::WorkLinkResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WorkLinkResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a WorkLinkResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkLinkResponsePrivate.
 */
WorkLinkResponse::WorkLinkResponse(WorkLinkResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void WorkLinkResponse::parseFailure(QIODevice &response)
{
    //Q_D(WorkLinkResponse);
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
 * \class QtAws::WorkLink::WorkLinkResponsePrivate
 * \brief The WorkLinkResponsePrivate class provides private implementation for WorkLinkResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a WorkLinkResponsePrivate object with public implementation \a q.
 */
WorkLinkResponsePrivate::WorkLinkResponsePrivate(
    WorkLinkResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace WorkLink
} // namespace QtAws
