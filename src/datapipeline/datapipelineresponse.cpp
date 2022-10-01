// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "datapipelineresponse.h"
#include "datapipelineresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::DataPipelineResponse
 * \brief The DataPipelineResponse class provides an interface for DataPipeline responses.
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * Constructs a DataPipelineResponse object with parent \a parent.
 */
DataPipelineResponse::DataPipelineResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DataPipelineResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DataPipelineResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DataPipelineResponsePrivate.
 */
DataPipelineResponse::DataPipelineResponse(DataPipelineResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DataPipelineResponse::parseFailure(QIODevice &response)
{
    //Q_D(DataPipelineResponse);
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
 * \class QtAws::DataPipeline::DataPipelineResponsePrivate
 * \brief The DataPipelineResponsePrivate class provides private implementation for DataPipelineResponse.
 * \internal
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * Constructs a DataPipelineResponsePrivate object with public implementation \a q.
 */
DataPipelineResponsePrivate::DataPipelineResponsePrivate(
    DataPipelineResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DataPipeline
} // namespace QtAws
