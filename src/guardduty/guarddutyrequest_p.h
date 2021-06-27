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

#ifndef QTAWS_GUARDDUTYREQUEST_P_H
#define QTAWS_GUARDDUTYREQUEST_P_H

namespace QtAws {
namespace GuardDuty {

class GuardDutyRequest;

class GuardDutyRequestPrivate {

public:
    GuardDutyRequest::Action action; ///< GuardDuty action to be performed.
    QString apiVersion;        ///< GuardDuty API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< GuardDuty request (query string) parameters. @todo?

    GuardDutyRequestPrivate(const GuardDutyRequest::Action action, GuardDutyRequest * const q);
    GuardDutyRequestPrivate(const GuardDutyRequestPrivate &other, GuardDutyRequest * const q);

    static QString toString(const GuardDutyRequest::Action &action);

protected:
    GuardDutyRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(GuardDutyRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
