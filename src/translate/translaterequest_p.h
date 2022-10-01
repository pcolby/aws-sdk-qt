// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSLATEREQUEST_P_H
#define QTAWS_TRANSLATEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "translaterequest.h"

namespace QtAws {
namespace Translate {

class TranslateRequest;

class TranslateRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    TranslateRequest::Action action; ///< Translate action to be performed.
    QString apiVersion;        ///< Translate API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Translate request (query string) parameters. @todo?

    TranslateRequestPrivate(const TranslateRequest::Action action, TranslateRequest * const q);
    TranslateRequestPrivate(const TranslateRequestPrivate &other, TranslateRequest * const q);

    static QString toString(const TranslateRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(TranslateRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
