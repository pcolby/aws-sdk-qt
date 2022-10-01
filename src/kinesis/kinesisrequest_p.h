// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISREQUEST_P_H
#define QTAWS_KINESISREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class KinesisRequest;

class KinesisRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KinesisRequest::Action action; ///< Kinesis action to be performed.
    QString apiVersion;        ///< Kinesis API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Kinesis request (query string) parameters. @todo?

    KinesisRequestPrivate(const KinesisRequest::Action action, KinesisRequest * const q);
    KinesisRequestPrivate(const KinesisRequestPrivate &other, KinesisRequest * const q);

    static QString toString(const KinesisRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KinesisRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
