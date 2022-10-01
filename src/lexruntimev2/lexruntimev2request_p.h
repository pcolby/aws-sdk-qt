// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXRUNTIMEV2REQUEST_P_H
#define QTAWS_LEXRUNTIMEV2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "lexruntimev2request.h"

namespace QtAws {
namespace LexRuntimeV2 {

class LexRuntimeV2Request;

class LexRuntimeV2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LexRuntimeV2Request::Action action; ///< LexRuntimeV2 action to be performed.
    QString apiVersion;        ///< LexRuntimeV2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LexRuntimeV2 request (query string) parameters. @todo?

    LexRuntimeV2RequestPrivate(const LexRuntimeV2Request::Action action, LexRuntimeV2Request * const q);
    LexRuntimeV2RequestPrivate(const LexRuntimeV2RequestPrivate &other, LexRuntimeV2Request * const q);

    static QString toString(const LexRuntimeV2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(LexRuntimeV2Request)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
