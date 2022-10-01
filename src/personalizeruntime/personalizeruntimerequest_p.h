// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZERUNTIMEREQUEST_P_H
#define QTAWS_PERSONALIZERUNTIMEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "personalizeruntimerequest.h"

namespace QtAws {
namespace PersonalizeRuntime {

class PersonalizeRuntimeRequest;

class PersonalizeRuntimeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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
