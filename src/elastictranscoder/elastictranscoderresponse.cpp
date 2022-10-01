// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "elastictranscoderresponse.h"
#include "elastictranscoderresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ElasticTranscoderResponse
 * \brief The ElasticTranscoderResponse class provides an interface for ElasticTranscoder responses.
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ElasticTranscoderResponse object with parent \a parent.
 */
ElasticTranscoderResponse::ElasticTranscoderResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ElasticTranscoderResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ElasticTranscoderResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticTranscoderResponsePrivate.
 */
ElasticTranscoderResponse::ElasticTranscoderResponse(ElasticTranscoderResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ElasticTranscoderResponse::parseFailure(QIODevice &response)
{
    //Q_D(ElasticTranscoderResponse);
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
 * \class QtAws::ElasticTranscoder::ElasticTranscoderResponsePrivate
 * \brief The ElasticTranscoderResponsePrivate class provides private implementation for ElasticTranscoderResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ElasticTranscoderResponsePrivate object with public implementation \a q.
 */
ElasticTranscoderResponsePrivate::ElasticTranscoderResponsePrivate(
    ElasticTranscoderResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
