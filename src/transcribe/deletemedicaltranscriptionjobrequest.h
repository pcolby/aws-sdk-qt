// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDICALTRANSCRIPTIONJOBREQUEST_H
#define QTAWS_DELETEMEDICALTRANSCRIPTIONJOBREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteMedicalTranscriptionJobRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteMedicalTranscriptionJobRequest : public TranscribeRequest {

public:
    DeleteMedicalTranscriptionJobRequest(const DeleteMedicalTranscriptionJobRequest &other);
    DeleteMedicalTranscriptionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMedicalTranscriptionJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
