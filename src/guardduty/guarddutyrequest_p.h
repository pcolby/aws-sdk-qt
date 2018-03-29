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

#ifndef QTAWS_GUARDDUTYREQUEST_P_H
#define QTAWS_GUARDDUTYREQUEST_P_H

#include "guardduty_p.h"
#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class GuardDutyRequest;

class QTAWS_EXPORT GuardDutyRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    GuardDutyRequest::Action action; ///< GuardDuty action to be performed.
    QString apiVersion;        ///< GuardDuty API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< GuardDuty request (query string) parameters. @todo?

    GuardDutyRequestPrivate(const GuardDutyRequest::Action action, GuardDutyRequest * const q);
    GuardDutyRequestPrivate(const GuardDutyRequestPrivate &other, GuardDutyRequest * const q);

    static QString toString(const GuardDutyRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(GuardDutyRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
