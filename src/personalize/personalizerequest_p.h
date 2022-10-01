// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZEREQUEST_P_H
#define QTAWS_PERSONALIZEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class PersonalizeRequest;

class PersonalizeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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
