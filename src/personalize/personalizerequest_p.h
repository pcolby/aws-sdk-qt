/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_PERSONALIZEREQUEST_P_H
#define QTAWS_PERSONALIZEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class PersonalizeRequest;

class QTAWS_EXPORT PersonalizeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PersonalizeRequest::Action action; ///< Personalize action to be performed.
    QString apiVersion;        ///< Personalize API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Personalize request (query string) parameters. @todo?

    PersonalizeRequestPrivate(const PersonalizeRequest::Action action, PersonalizeRequest * const q);
    PersonalizeRequestPrivate(const PersonalizeRequestPrivate &other, PersonalizeRequest * const q);

    static QString toString(const PersonalizeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PersonalizeRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
