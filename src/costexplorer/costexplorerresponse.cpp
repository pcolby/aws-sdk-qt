// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "costexplorerresponse.h"
#include "costexplorerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::CostExplorerResponse
 * \brief The CostExplorerResponse class provides an interface for CostExplorer responses.
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a CostExplorerResponse object with parent \a parent.
 */
CostExplorerResponse::CostExplorerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CostExplorerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CostExplorerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CostExplorerResponsePrivate.
 */
CostExplorerResponse::CostExplorerResponse(CostExplorerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CostExplorerResponse::parseFailure(QIODevice &response)
{
    //Q_D(CostExplorerResponse);
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
 * \class QtAws::CostExplorer::CostExplorerResponsePrivate
 * \brief The CostExplorerResponsePrivate class provides private implementation for CostExplorerResponse.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a CostExplorerResponsePrivate object with public implementation \a q.
 */
CostExplorerResponsePrivate::CostExplorerResponsePrivate(
    CostExplorerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CostExplorer
} // namespace QtAws
