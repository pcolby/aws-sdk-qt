// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCESSANALYZERREQUEST_P_H
#define QTAWS_ACCESSANALYZERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "accessanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class AccessAnalyzerRequest;

class AccessAnalyzerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AccessAnalyzerRequest::Action action; ///< AccessAnalyzer action to be performed.
    QString apiVersion;        ///< AccessAnalyzer API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AccessAnalyzer request (query string) parameters. @todo?

    AccessAnalyzerRequestPrivate(const AccessAnalyzerRequest::Action action, AccessAnalyzerRequest * const q);
    AccessAnalyzerRequestPrivate(const AccessAnalyzerRequestPrivate &other, AccessAnalyzerRequest * const q);

    static QString toString(const AccessAnalyzerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AccessAnalyzerRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
