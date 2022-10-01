// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSCRIBESTREAMINGREQUEST_P_H
#define QTAWS_TRANSCRIBESTREAMINGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "transcribestreamingrequest.h"

namespace QtAws {
namespace TranscribeStreaming {

class TranscribeStreamingRequest;

class TranscribeStreamingRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    TranscribeStreamingRequest::Action action; ///< TranscribeStreaming action to be performed.
    QString apiVersion;        ///< TranscribeStreaming API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< TranscribeStreaming request (query string) parameters. @todo?

    TranscribeStreamingRequestPrivate(const TranscribeStreamingRequest::Action action, TranscribeStreamingRequest * const q);
    TranscribeStreamingRequestPrivate(const TranscribeStreamingRequestPrivate &other, TranscribeStreamingRequest * const q);

    static QString toString(const TranscribeStreamingRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(TranscribeStreamingRequest)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif
