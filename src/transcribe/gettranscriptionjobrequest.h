// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSCRIPTIONJOBREQUEST_H
#define QTAWS_GETTRANSCRIPTIONJOBREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class GetTranscriptionJobRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT GetTranscriptionJobRequest : public TranscribeRequest {

public:
    GetTranscriptionJobRequest(const GetTranscriptionJobRequest &other);
    GetTranscriptionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTranscriptionJobRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
