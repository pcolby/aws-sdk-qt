// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDICALTRANSCRIPTIONJOBREQUEST_H
#define QTAWS_GETMEDICALTRANSCRIPTIONJOBREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class GetMedicalTranscriptionJobRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT GetMedicalTranscriptionJobRequest : public TranscribeRequest {

public:
    GetMedicalTranscriptionJobRequest(const GetMedicalTranscriptionJobRequest &other);
    GetMedicalTranscriptionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMedicalTranscriptionJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
