// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOMEDIAREQUEST_P_H
#define QTAWS_KINESISVIDEOMEDIAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kinesisvideomediarequest.h"

namespace QtAws {
namespace KinesisVideoMedia {

class KinesisVideoMediaRequest;

class KinesisVideoMediaRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KinesisVideoMediaRequest::Action action; ///< KinesisVideoMedia action to be performed.
    QString apiVersion;        ///< KinesisVideoMedia API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< KinesisVideoMedia request (query string) parameters. @todo?

    KinesisVideoMediaRequestPrivate(const KinesisVideoMediaRequest::Action action, KinesisVideoMediaRequest * const q);
    KinesisVideoMediaRequestPrivate(const KinesisVideoMediaRequestPrivate &other, KinesisVideoMediaRequest * const q);

    static QString toString(const KinesisVideoMediaRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KinesisVideoMediaRequest)

};

} // namespace KinesisVideoMedia
} // namespace QtAws

#endif
