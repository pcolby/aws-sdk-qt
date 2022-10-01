// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMEDICALSTREAMTRANSCRIPTIONREQUEST_H
#define QTAWS_STARTMEDICALSTREAMTRANSCRIPTIONREQUEST_H

#include "transcribestreamingrequest.h"

namespace QtAws {
namespace TranscribeStreaming {

class StartMedicalStreamTranscriptionRequestPrivate;

class QTAWSTRANSCRIBESTREAMING_EXPORT StartMedicalStreamTranscriptionRequest : public TranscribeStreamingRequest {

public:
    StartMedicalStreamTranscriptionRequest(const StartMedicalStreamTranscriptionRequest &other);
    StartMedicalStreamTranscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMedicalStreamTranscriptionRequest)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif
