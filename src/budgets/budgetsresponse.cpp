// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "budgetsresponse.h"
#include "budgetsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Budgets {

/*!
 * \class QtAws::Budgets::BudgetsResponse
 * \brief The BudgetsResponse class provides an interface for Budgets responses.
 *
 * \inmodule QtAwsBudgets
 */

/*!
 * Constructs a BudgetsResponse object with parent \a parent.
 */
BudgetsResponse::BudgetsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new BudgetsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a BudgetsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BudgetsResponsePrivate.
 */
BudgetsResponse::BudgetsResponse(BudgetsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void BudgetsResponse::parseFailure(QIODevice &response)
{
    //Q_D(BudgetsResponse);
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
 * \class QtAws::Budgets::BudgetsResponsePrivate
 * \brief The BudgetsResponsePrivate class provides private implementation for BudgetsResponse.
 * \internal
 *
 * \inmodule QtAwsBudgets
 */

/*!
 * Constructs a BudgetsResponsePrivate object with public implementation \a q.
 */
BudgetsResponsePrivate::BudgetsResponsePrivate(
    BudgetsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Budgets
} // namespace QtAws
