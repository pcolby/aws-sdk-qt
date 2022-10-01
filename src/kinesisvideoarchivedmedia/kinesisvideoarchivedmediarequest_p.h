// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOARCHIVEDMEDIAREQUEST_P_H
#define QTAWS_KINESISVIDEOARCHIVEDMEDIAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kinesisvideoarchivedmediarequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class KinesisVideoArchivedMediaRequest;

class KinesisVideoArchivedMediaRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KinesisVideoArchivedMediaRequest::Action action; ///< KinesisVideoArchivedMedia action to be performed.
    QString apiVersion;        ///< KinesisVideoArchivedMedia API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< KinesisVideoArchivedMedia request (query string) parameters. @todo?

    KinesisVideoArchivedMediaRequestPrivate(const KinesisVideoArchivedMediaRequest::Action action, KinesisVideoArchivedMediaRequest * const q);
    KinesisVideoArchivedMediaRequestPrivate(const KinesisVideoArchivedMediaRequestPrivate &other, KinesisVideoArchivedMediaRequest * const q);

    static QString toString(const KinesisVideoArchivedMediaRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KinesisVideoArchivedMediaRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
