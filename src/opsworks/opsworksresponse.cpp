// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "opsworksresponse.h"
#include "opsworksresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/*!
 * \class QtAws::OpsWorks::OpsWorksResponse
 * \brief The OpsWorksResponse class provides an interface for OpsWorks responses.
 *
 * \inmodule QtAwsOpsWorks
 */

/*!
 * Constructs a OpsWorksResponse object with parent \a parent.
 */
OpsWorksResponse::OpsWorksResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new OpsWorksResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a OpsWorksResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from OpsWorksResponsePrivate.
 */
OpsWorksResponse::OpsWorksResponse(OpsWorksResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void OpsWorksResponse::parseFailure(QIODevice &response)
{
    //Q_D(OpsWorksResponse);
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
 * \class QtAws::OpsWorks::OpsWorksResponsePrivate
 * \brief The OpsWorksResponsePrivate class provides private implementation for OpsWorksResponse.
 * \internal
 *
 * \inmodule QtAwsOpsWorks
 */

/*!
 * Constructs a OpsWorksResponsePrivate object with public implementation \a q.
 */
OpsWorksResponsePrivate::OpsWorksResponsePrivate(
    OpsWorksResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace OpsWorks
} // namespace QtAws
