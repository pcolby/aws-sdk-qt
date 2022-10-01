// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHREQUEST_P_H
#define QTAWS_BATCHREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class BatchRequest;

class BatchRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    BatchRequest::Action action; ///< Batch action to be performed.
    QString apiVersion;        ///< Batch API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Batch request (query string) parameters. @todo?

    BatchRequestPrivate(const BatchRequest::Action action, BatchRequest * const q);
    BatchRequestPrivate(const BatchRequestPrivate &other, BatchRequest * const q);

    static QString toString(const BatchRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(BatchRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
