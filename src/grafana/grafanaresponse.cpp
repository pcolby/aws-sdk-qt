// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "grafanaresponse.h"
#include "grafanaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Grafana {

/*!
 * \class QtAws::Grafana::GrafanaResponse
 * \brief The GrafanaResponse class provides an interface for Grafana responses.
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a GrafanaResponse object with parent \a parent.
 */
GrafanaResponse::GrafanaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GrafanaResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GrafanaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GrafanaResponsePrivate.
 */
GrafanaResponse::GrafanaResponse(GrafanaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GrafanaResponse::parseFailure(QIODevice &response)
{
    //Q_D(GrafanaResponse);
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
 * \class QtAws::Grafana::GrafanaResponsePrivate
 * \brief The GrafanaResponsePrivate class provides private implementation for GrafanaResponse.
 * \internal
 *
 * \inmodule QtAwsGrafana
 */

/*!
 * Constructs a GrafanaResponsePrivate object with public implementation \a q.
 */
GrafanaResponsePrivate::GrafanaResponsePrivate(
    GrafanaResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Grafana
} // namespace QtAws
