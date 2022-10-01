// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZEEVENTSREQUEST_P_H
#define QTAWS_PERSONALIZEEVENTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "personalizeeventsrequest.h"

namespace QtAws {
namespace PersonalizeEvents {

class PersonalizeEventsRequest;

class PersonalizeEventsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PersonalizeEventsRequest::Action action; ///< PersonalizeEvents action to be performed.
    QString apiVersion;        ///< PersonalizeEvents API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< PersonalizeEvents request (query string) parameters. @todo?

    PersonalizeEventsRequestPrivate(const PersonalizeEventsRequest::Action action, PersonalizeEventsRequest * const q);
    PersonalizeEventsRequestPrivate(const PersonalizeEventsRequestPrivate &other, PersonalizeEventsRequest * const q);

    static QString toString(const PersonalizeEventsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PersonalizeEventsRequest)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
