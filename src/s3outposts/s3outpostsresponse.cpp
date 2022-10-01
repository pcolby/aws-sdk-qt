// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "s3outpostsresponse.h"
#include "s3outpostsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Outposts {

/*!
 * \class QtAws::S3Outposts::S3OutpostsResponse
 * \brief The S3OutpostsResponse class provides an interface for S3Outposts responses.
 *
 * \inmodule QtAwsS3Outposts
 */

/*!
 * Constructs a S3OutpostsResponse object with parent \a parent.
 */
S3OutpostsResponse::S3OutpostsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new S3OutpostsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a S3OutpostsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from S3OutpostsResponsePrivate.
 */
S3OutpostsResponse::S3OutpostsResponse(S3OutpostsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void S3OutpostsResponse::parseFailure(QIODevice &response)
{
    //Q_D(S3OutpostsResponse);
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
 * \class QtAws::S3Outposts::S3OutpostsResponsePrivate
 * \brief The S3OutpostsResponsePrivate class provides private implementation for S3OutpostsResponse.
 * \internal
 *
 * \inmodule QtAwsS3Outposts
 */

/*!
 * Constructs a S3OutpostsResponsePrivate object with public implementation \a q.
 */
S3OutpostsResponsePrivate::S3OutpostsResponsePrivate(
    S3OutpostsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace S3Outposts
} // namespace QtAws
