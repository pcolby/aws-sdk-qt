// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERREQUEST_P_H
#define QTAWS_TRANSFERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class TransferRequest;

class TransferRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    TransferRequest::Action action; ///< Transfer action to be performed.
    QString apiVersion;        ///< Transfer API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Transfer request (query string) parameters. @todo?

    TransferRequestPrivate(const TransferRequest::Action action, TransferRequest * const q);
    TransferRequestPrivate(const TransferRequestPrivate &other, TransferRequest * const q);

    static QString toString(const TransferRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(TransferRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
