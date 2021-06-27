/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SAVINGSPLANSREQUEST_P_H
#define QTAWS_SAVINGSPLANSREQUEST_P_H

namespace QtAws {
namespace SavingsPlans {

class SavingsPlansRequest;

class SavingsPlansRequestPrivate {

public:
    SavingsPlansRequest::Action action; ///< SavingsPlans action to be performed.
    QString apiVersion;        ///< SavingsPlans API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SavingsPlans request (query string) parameters. @todo?

    SavingsPlansRequestPrivate(const SavingsPlansRequest::Action action, SavingsPlansRequest * const q);
    SavingsPlansRequestPrivate(const SavingsPlansRequestPrivate &other, SavingsPlansRequest * const q);

    static QString toString(const SavingsPlansRequest::Action &action);

protected:
    SavingsPlansRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(SavingsPlansRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
