// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "devopsgururesponse.h"
#include "devopsgururesponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DevOpsGuru {

/*!
 * \class QtAws::DevOpsGuru::DevOpsGuruResponse
 * \brief The DevOpsGuruResponse class provides an interface for DevOpsGuru responses.
 *
 * \inmodule QtAwsDevOpsGuru
 */

/*!
 * Constructs a DevOpsGuruResponse object with parent \a parent.
 */
DevOpsGuruResponse::DevOpsGuruResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DevOpsGuruResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DevOpsGuruResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DevOpsGuruResponsePrivate.
 */
DevOpsGuruResponse::DevOpsGuruResponse(DevOpsGuruResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DevOpsGuruResponse::parseFailure(QIODevice &response)
{
    //Q_D(DevOpsGuruResponse);
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
 * \class QtAws::DevOpsGuru::DevOpsGuruResponsePrivate
 * \brief The DevOpsGuruResponsePrivate class provides private implementation for DevOpsGuruResponse.
 * \internal
 *
 * \inmodule QtAwsDevOpsGuru
 */

/*!
 * Constructs a DevOpsGuruResponsePrivate object with public implementation \a q.
 */
DevOpsGuruResponsePrivate::DevOpsGuruResponsePrivate(
    DevOpsGuruResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DevOpsGuru
} // namespace QtAws
