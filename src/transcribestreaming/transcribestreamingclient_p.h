// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSCRIBESTREAMINGCLIENT_P_H
#define QTAWS_TRANSCRIBESTREAMINGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace TranscribeStreaming {

class TranscribeStreamingClient;

class TranscribeStreamingClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit TranscribeStreamingClientPrivate(TranscribeStreamingClient * const q);

private:
    Q_DECLARE_PUBLIC(TranscribeStreamingClient)
    Q_DISABLE_COPY(TranscribeStreamingClientPrivate)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif
