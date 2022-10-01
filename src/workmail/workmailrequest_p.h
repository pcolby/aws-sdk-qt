// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKMAILREQUEST_P_H
#define QTAWS_WORKMAILREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class WorkMailRequest;

class WorkMailRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    WorkMailRequest::Action action; ///< WorkMail action to be performed.
    QString apiVersion;        ///< WorkMail API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< WorkMail request (query string) parameters. @todo?

    WorkMailRequestPrivate(const WorkMailRequest::Action action, WorkMailRequest * const q);
    WorkMailRequestPrivate(const WorkMailRequestPrivate &other, WorkMailRequest * const q);

    static QString toString(const WorkMailRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WorkMailRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
