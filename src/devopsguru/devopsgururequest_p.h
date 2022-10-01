// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEVOPSGURUREQUEST_P_H
#define QTAWS_DEVOPSGURUREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DevOpsGuruRequest;

class DevOpsGuruRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DevOpsGuruRequest::Action action; ///< DevOpsGuru action to be performed.
    QString apiVersion;        ///< DevOpsGuru API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DevOpsGuru request (query string) parameters. @todo?

    DevOpsGuruRequestPrivate(const DevOpsGuruRequest::Action action, DevOpsGuruRequest * const q);
    DevOpsGuruRequestPrivate(const DevOpsGuruRequestPrivate &other, DevOpsGuruRequest * const q);

    static QString toString(const DevOpsGuruRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DevOpsGuruRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
