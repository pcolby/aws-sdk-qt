// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TEXTRACTREQUEST_P_H
#define QTAWS_TEXTRACTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "textractrequest.h"

namespace QtAws {
namespace Textract {

class TextractRequest;

class TextractRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    TextractRequest::Action action; ///< Textract action to be performed.
    QString apiVersion;        ///< Textract API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Textract request (query string) parameters. @todo?

    TextractRequestPrivate(const TextractRequest::Action action, TextractRequest * const q);
    TextractRequestPrivate(const TextractRequestPrivate &other, TextractRequest * const q);

    static QString toString(const TextractRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(TextractRequest)

};

} // namespace Textract
} // namespace QtAws

#endif
