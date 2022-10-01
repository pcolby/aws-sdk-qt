// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXRUNTIMEREQUEST_P_H
#define QTAWS_LEXRUNTIMEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "lexruntimerequest.h"

namespace QtAws {
namespace LexRuntime {

class LexRuntimeRequest;

class LexRuntimeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LexRuntimeRequest::Action action; ///< LexRuntime action to be performed.
    QString apiVersion;        ///< LexRuntime API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LexRuntime request (query string) parameters. @todo?

    LexRuntimeRequestPrivate(const LexRuntimeRequest::Action action, LexRuntimeRequest * const q);
    LexRuntimeRequestPrivate(const LexRuntimeRequestPrivate &other, LexRuntimeRequest * const q);

    static QString toString(const LexRuntimeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LexRuntimeRequest)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
