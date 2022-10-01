// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEGURUPROFILERREQUEST_P_H
#define QTAWS_CODEGURUPROFILERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class CodeGuruProfilerRequest;

class CodeGuruProfilerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CodeGuruProfilerRequest::Action action; ///< CodeGuruProfiler action to be performed.
    QString apiVersion;        ///< CodeGuruProfiler API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeGuruProfiler request (query string) parameters. @todo?

    CodeGuruProfilerRequestPrivate(const CodeGuruProfilerRequest::Action action, CodeGuruProfilerRequest * const q);
    CodeGuruProfilerRequestPrivate(const CodeGuruProfilerRequestPrivate &other, CodeGuruProfilerRequest * const q);

    static QString toString(const CodeGuruProfilerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodeGuruProfilerRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
