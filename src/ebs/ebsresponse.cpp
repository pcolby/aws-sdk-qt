// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ebsresponse.h"
#include "ebsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ebs {

/*!
 * \class QtAws::Ebs::EbsResponse
 * \brief The EbsResponse class provides an interface for Ebs responses.
 *
 * \inmodule QtAwsEbs
 */

/*!
 * Constructs a EbsResponse object with parent \a parent.
 */
EbsResponse::EbsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EbsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EbsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EbsResponsePrivate.
 */
EbsResponse::EbsResponse(EbsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EbsResponse::parseFailure(QIODevice &response)
{
    //Q_D(EbsResponse);
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
 * \class QtAws::Ebs::EbsResponsePrivate
 * \brief The EbsResponsePrivate class provides private implementation for EbsResponse.
 * \internal
 *
 * \inmodule QtAwsEbs
 */

/*!
 * Constructs a EbsResponsePrivate object with public implementation \a q.
 */
EbsResponsePrivate::EbsResponsePrivate(
    EbsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Ebs
} // namespace QtAws
