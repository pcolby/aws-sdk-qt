/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_PERSONALIZERUNTIMEREQUEST_P_H
#define QTAWS_PERSONALIZERUNTIMEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "personalizeruntimerequest.h"

namespace QtAws {
namespace PersonalizeRuntime {

class PersonalizeRuntimeRequest;

class QTAWS_EXPORT PersonalizeRuntimeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PersonalizeRuntimeRequest::Action action; ///< PersonalizeRuntime action to be performed.
    QString apiVersion;        ///< PersonalizeRuntime API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< PersonalizeRuntime request (query string) parameters. @todo?

    PersonalizeRuntimeRequestPrivate(const PersonalizeRuntimeRequest::Action action, PersonalizeRuntimeRequest * const q);
    PersonalizeRuntimeRequestPrivate(const PersonalizeRuntimeRequestPrivate &other, PersonalizeRuntimeRequest * const q);

    static QString toString(const PersonalizeRuntimeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PersonalizeRuntimeRequest)

};

} // namespace PersonalizeRuntime
} // namespace QtAws

#endif
