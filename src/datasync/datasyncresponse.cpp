// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "datasyncresponse.h"
#include "datasyncresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DataSyncResponse
 * \brief The DataSyncResponse class provides an interface for DataSync responses.
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DataSyncResponse object with parent \a parent.
 */
DataSyncResponse::DataSyncResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DataSyncResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DataSyncResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DataSyncResponsePrivate.
 */
DataSyncResponse::DataSyncResponse(DataSyncResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DataSyncResponse::parseFailure(QIODevice &response)
{
    //Q_D(DataSyncResponse);
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
 * \class QtAws::DataSync::DataSyncResponsePrivate
 * \brief The DataSyncResponsePrivate class provides private implementation for DataSyncResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DataSyncResponsePrivate object with public implementation \a q.
 */
DataSyncResponsePrivate::DataSyncResponsePrivate(
    DataSyncResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DataSync
} // namespace QtAws
