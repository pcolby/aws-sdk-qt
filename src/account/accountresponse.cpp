// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "accountresponse.h"
#include "accountresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Account {

/*!
 * \class QtAws::Account::AccountResponse
 * \brief The AccountResponse class provides an interface for Account responses.
 *
 * \inmodule QtAwsAccount
 */

/*!
 * Constructs a AccountResponse object with parent \a parent.
 */
AccountResponse::AccountResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AccountResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AccountResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AccountResponsePrivate.
 */
AccountResponse::AccountResponse(AccountResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AccountResponse::parseFailure(QIODevice &response)
{
    //Q_D(AccountResponse);
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
 * \class QtAws::Account::AccountResponsePrivate
 * \brief The AccountResponsePrivate class provides private implementation for AccountResponse.
 * \internal
 *
 * \inmodule QtAwsAccount
 */

/*!
 * Constructs a AccountResponsePrivate object with public implementation \a q.
 */
AccountResponsePrivate::AccountResponsePrivate(
    AccountResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Account
} // namespace QtAws
