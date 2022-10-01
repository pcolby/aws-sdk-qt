// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MTURKREQUEST_P_H
#define QTAWS_MTURKREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class MTurkRequest;

class MTurkRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MTurkRequest::Action action; ///< MTurk action to be performed.
    QString apiVersion;        ///< MTurk API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MTurk request (query string) parameters. @todo?

    MTurkRequestPrivate(const MTurkRequest::Action action, MTurkRequest * const q);
    MTurkRequestPrivate(const MTurkRequestPrivate &other, MTurkRequest * const q);

    static QString toString(const MTurkRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MTurkRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
