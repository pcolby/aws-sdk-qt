// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARCONNECTIONSREQUEST_P_H
#define QTAWS_CODESTARCONNECTIONSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "codestarconnectionsrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class CodeStarconnectionsRequest;

class CodeStarconnectionsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CodeStarconnectionsRequest::Action action; ///< CodeStarconnections action to be performed.
    QString apiVersion;        ///< CodeStarconnections API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeStarconnections request (query string) parameters. @todo?

    CodeStarconnectionsRequestPrivate(const CodeStarconnectionsRequest::Action action, CodeStarconnectionsRequest * const q);
    CodeStarconnectionsRequestPrivate(const CodeStarconnectionsRequestPrivate &other, CodeStarconnectionsRequest * const q);

    static QString toString(const CodeStarconnectionsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodeStarconnectionsRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
