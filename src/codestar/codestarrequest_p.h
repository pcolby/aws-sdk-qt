// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARREQUEST_P_H
#define QTAWS_CODESTARREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "codestarrequest.h"

namespace QtAws {
namespace CodeStar {

class CodeStarRequest;

class CodeStarRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CodeStarRequest::Action action; ///< CodeStar action to be performed.
    QString apiVersion;        ///< CodeStar API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeStar request (query string) parameters. @todo?

    CodeStarRequestPrivate(const CodeStarRequest::Action action, CodeStarRequest * const q);
    CodeStarRequestPrivate(const CodeStarRequestPrivate &other, CodeStarRequest * const q);

    static QString toString(const CodeStarRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodeStarRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
