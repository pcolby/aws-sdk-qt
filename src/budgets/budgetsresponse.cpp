/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    Q_D(BudgetsResponse);
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
