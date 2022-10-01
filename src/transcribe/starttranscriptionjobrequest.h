// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTRANSCRIPTIONJOBREQUEST_H
#define QTAWS_STARTTRANSCRIPTIONJOBREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class StartTranscriptionJobRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT StartTranscriptionJobRequest : public TranscribeRequest {

public:
    StartTranscriptionJobRequest(const StartTranscriptionJobRequest &other);
    StartTranscriptionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTranscriptionJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
