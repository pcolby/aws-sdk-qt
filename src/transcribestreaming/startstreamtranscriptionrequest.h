// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMTRANSCRIPTIONREQUEST_H
#define QTAWS_STARTSTREAMTRANSCRIPTIONREQUEST_H

#include "transcribestreamingrequest.h"

namespace QtAws {
namespace TranscribeStreaming {

class StartStreamTranscriptionRequestPrivate;

class QTAWSTRANSCRIBESTREAMING_EXPORT StartStreamTranscriptionRequest : public TranscribeStreamingRequest {

public:
    StartStreamTranscriptionRequest(const StartStreamTranscriptionRequest &other);
    StartStreamTranscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartStreamTranscriptionRequest)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif
