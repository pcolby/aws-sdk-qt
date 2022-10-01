// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "redshiftserverlessresponse.h"
#include "redshiftserverlessresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::RedshiftServerlessResponse
 * \brief The RedshiftServerlessResponse class provides an interface for RedshiftServerless responses.
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a RedshiftServerlessResponse object with parent \a parent.
 */
RedshiftServerlessResponse::RedshiftServerlessResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RedshiftServerlessResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RedshiftServerlessResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RedshiftServerlessResponsePrivate.
 */
RedshiftServerlessResponse::RedshiftServerlessResponse(RedshiftServerlessResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RedshiftServerlessResponse::parseFailure(QIODevice &response)
{
    //Q_D(RedshiftServerlessResponse);
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
 * \class QtAws::RedshiftServerless::RedshiftServerlessResponsePrivate
 * \brief The RedshiftServerlessResponsePrivate class provides private implementation for RedshiftServerlessResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a RedshiftServerlessResponsePrivate object with public implementation \a q.
 */
RedshiftServerlessResponsePrivate::RedshiftServerlessResponsePrivate(
    RedshiftServerlessResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace RedshiftServerless
} // namespace QtAws
