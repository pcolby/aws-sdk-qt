// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRANSCRIPTIONJOBSREQUEST_H
#define QTAWS_LISTTRANSCRIPTIONJOBSREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class ListTranscriptionJobsRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT ListTranscriptionJobsRequest : public TranscribeRequest {

public:
    ListTranscriptionJobsRequest(const ListTranscriptionJobsRequest &other);
    ListTranscriptionJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTranscriptionJobsRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
