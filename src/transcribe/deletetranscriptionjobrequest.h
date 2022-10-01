// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSCRIPTIONJOBREQUEST_H
#define QTAWS_DELETETRANSCRIPTIONJOBREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteTranscriptionJobRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteTranscriptionJobRequest : public TranscribeRequest {

public:
    DeleteTranscriptionJobRequest(const DeleteTranscriptionJobRequest &other);
    DeleteTranscriptionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTranscriptionJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
