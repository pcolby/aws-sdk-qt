// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "dataexchangeresponse.h"
#include "dataexchangeresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataExchange {

/*!
 * \class QtAws::DataExchange::DataExchangeResponse
 * \brief The DataExchangeResponse class provides an interface for DataExchange responses.
 *
 * \inmodule QtAwsDataExchange
 */

/*!
 * Constructs a DataExchangeResponse object with parent \a parent.
 */
DataExchangeResponse::DataExchangeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DataExchangeResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DataExchangeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DataExchangeResponsePrivate.
 */
DataExchangeResponse::DataExchangeResponse(DataExchangeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DataExchangeResponse::parseFailure(QIODevice &response)
{
    //Q_D(DataExchangeResponse);
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
 * \class QtAws::DataExchange::DataExchangeResponsePrivate
 * \brief The DataExchangeResponsePrivate class provides private implementation for DataExchangeResponse.
 * \internal
 *
 * \inmodule QtAwsDataExchange
 */

/*!
 * Constructs a DataExchangeResponsePrivate object with public implementation \a q.
 */
DataExchangeResponsePrivate::DataExchangeResponsePrivate(
    DataExchangeResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DataExchange
} // namespace QtAws
