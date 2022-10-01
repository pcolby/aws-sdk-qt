// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDICALTRANSCRIPTIONJOBSREQUEST_H
#define QTAWS_LISTMEDICALTRANSCRIPTIONJOBSREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class ListMedicalTranscriptionJobsRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT ListMedicalTranscriptionJobsRequest : public TranscribeRequest {

public:
    ListMedicalTranscriptionJobsRequest(const ListMedicalTranscriptionJobsRequest &other);
    ListMedicalTranscriptionJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMedicalTranscriptionJobsRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
