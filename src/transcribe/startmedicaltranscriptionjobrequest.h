// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMEDICALTRANSCRIPTIONJOBREQUEST_H
#define QTAWS_STARTMEDICALTRANSCRIPTIONJOBREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class StartMedicalTranscriptionJobRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT StartMedicalTranscriptionJobRequest : public TranscribeRequest {

public:
    StartMedicalTranscriptionJobRequest(const StartMedicalTranscriptionJobRequest &other);
    StartMedicalTranscriptionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMedicalTranscriptionJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
