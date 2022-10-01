// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODECOMMITREQUEST_P_H
#define QTAWS_CODECOMMITREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class CodeCommitRequest;

class CodeCommitRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CodeCommitRequest::Action action; ///< CodeCommit action to be performed.
    QString apiVersion;        ///< CodeCommit API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeCommit request (query string) parameters. @todo?

    CodeCommitRequestPrivate(const CodeCommitRequest::Action action, CodeCommitRequest * const q);
    CodeCommitRequestPrivate(const CodeCommitRequestPrivate &other, CodeCommitRequest * const q);

    static QString toString(const CodeCommitRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodeCommitRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
