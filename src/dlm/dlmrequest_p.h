// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DLMREQUEST_P_H
#define QTAWS_DLMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "dlmrequest.h"

namespace QtAws {
namespace Dlm {

class DlmRequest;

class DlmRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DlmRequest::Action action; ///< Dlm action to be performed.
    QString apiVersion;        ///< Dlm API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Dlm request (query string) parameters. @todo?

    DlmRequestPrivate(const DlmRequest::Action action, DlmRequest * const q);
    DlmRequestPrivate(const DlmRequestPrivate &other, DlmRequest * const q);

    static QString toString(const DlmRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DlmRequest)

};

} // namespace Dlm
} // namespace QtAws

#endif
