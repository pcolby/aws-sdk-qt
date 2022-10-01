// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSCRIBEREQUEST_P_H
#define QTAWS_TRANSCRIBEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class TranscribeRequest;

class TranscribeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    TranscribeRequest::Action action; ///< Transcribe action to be performed.
    QString apiVersion;        ///< Transcribe API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Transcribe request (query string) parameters. @todo?

    TranscribeRequestPrivate(const TranscribeRequest::Action action, TranscribeRequest * const q);
    TranscribeRequestPrivate(const TranscribeRequestPrivate &other, TranscribeRequest * const q);

    static QString toString(const TranscribeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(TranscribeRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
