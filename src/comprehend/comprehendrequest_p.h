// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPREHENDREQUEST_P_H
#define QTAWS_COMPREHENDREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class ComprehendRequest;

class ComprehendRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ComprehendRequest::Action action; ///< Comprehend action to be performed.
    QString apiVersion;        ///< Comprehend API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Comprehend request (query string) parameters. @todo?

    ComprehendRequestPrivate(const ComprehendRequest::Action action, ComprehendRequest * const q);
    ComprehendRequestPrivate(const ComprehendRequestPrivate &other, ComprehendRequest * const q);

    static QString toString(const ComprehendRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ComprehendRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
