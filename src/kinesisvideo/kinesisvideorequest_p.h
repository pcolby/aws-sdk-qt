// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOREQUEST_P_H
#define QTAWS_KINESISVIDEOREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class KinesisVideoRequest;

class KinesisVideoRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KinesisVideoRequest::Action action; ///< KinesisVideo action to be performed.
    QString apiVersion;        ///< KinesisVideo API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< KinesisVideo request (query string) parameters. @todo?

    KinesisVideoRequestPrivate(const KinesisVideoRequest::Action action, KinesisVideoRequest * const q);
    KinesisVideoRequestPrivate(const KinesisVideoRequestPrivate &other, KinesisVideoRequest * const q);

    static QString toString(const KinesisVideoRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KinesisVideoRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
