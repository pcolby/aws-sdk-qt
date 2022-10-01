// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIATAILORREQUEST_P_H
#define QTAWS_MEDIATAILORREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class MediaTailorRequest;

class MediaTailorRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MediaTailorRequest::Action action; ///< MediaTailor action to be performed.
    QString apiVersion;        ///< MediaTailor API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MediaTailor request (query string) parameters. @todo?

    MediaTailorRequestPrivate(const MediaTailorRequest::Action action, MediaTailorRequest * const q);
    MediaTailorRequestPrivate(const MediaTailorRequestPrivate &other, MediaTailorRequest * const q);

    static QString toString(const MediaTailorRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MediaTailorRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
