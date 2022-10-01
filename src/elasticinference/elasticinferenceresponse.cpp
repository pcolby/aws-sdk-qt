// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "elasticinferenceresponse.h"
#include "elasticinferenceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticInference {

/*!
 * \class QtAws::ElasticInference::ElasticInferenceResponse
 * \brief The ElasticInferenceResponse class provides an interface for ElasticInference responses.
 *
 * \inmodule QtAwsElasticInference
 */

/*!
 * Constructs a ElasticInferenceResponse object with parent \a parent.
 */
ElasticInferenceResponse::ElasticInferenceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ElasticInferenceResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ElasticInferenceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticInferenceResponsePrivate.
 */
ElasticInferenceResponse::ElasticInferenceResponse(ElasticInferenceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ElasticInferenceResponse::parseFailure(QIODevice &response)
{
    //Q_D(ElasticInferenceResponse);
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
 * \class QtAws::ElasticInference::ElasticInferenceResponsePrivate
 * \brief The ElasticInferenceResponsePrivate class provides private implementation for ElasticInferenceResponse.
 * \internal
 *
 * \inmodule QtAwsElasticInference
 */

/*!
 * Constructs a ElasticInferenceResponsePrivate object with public implementation \a q.
 */
ElasticInferenceResponsePrivate::ElasticInferenceResponsePrivate(
    ElasticInferenceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ElasticInference
} // namespace QtAws
