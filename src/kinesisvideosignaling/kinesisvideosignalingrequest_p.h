// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOSIGNALINGREQUEST_P_H
#define QTAWS_KINESISVIDEOSIGNALINGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kinesisvideosignalingrequest.h"

namespace QtAws {
namespace KinesisVideoSignaling {

class KinesisVideoSignalingRequest;

class KinesisVideoSignalingRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KinesisVideoSignalingRequest::Action action; ///< KinesisVideoSignaling action to be performed.
    QString apiVersion;        ///< KinesisVideoSignaling API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< KinesisVideoSignaling request (query string) parameters. @todo?

    KinesisVideoSignalingRequestPrivate(const KinesisVideoSignalingRequest::Action action, KinesisVideoSignalingRequest * const q);
    KinesisVideoSignalingRequestPrivate(const KinesisVideoSignalingRequestPrivate &other, KinesisVideoSignalingRequest * const q);

    static QString toString(const KinesisVideoSignalingRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KinesisVideoSignalingRequest)

};

} // namespace KinesisVideoSignaling
} // namespace QtAws

#endif
