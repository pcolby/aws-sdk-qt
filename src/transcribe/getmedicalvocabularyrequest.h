// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDICALVOCABULARYREQUEST_H
#define QTAWS_GETMEDICALVOCABULARYREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class GetMedicalVocabularyRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT GetMedicalVocabularyRequest : public TranscribeRequest {

public:
    GetMedicalVocabularyRequest(const GetMedicalVocabularyRequest &other);
    GetMedicalVocabularyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMedicalVocabularyRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
