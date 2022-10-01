// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDICALVOCABULARYREQUEST_H
#define QTAWS_CREATEMEDICALVOCABULARYREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class CreateMedicalVocabularyRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT CreateMedicalVocabularyRequest : public TranscribeRequest {

public:
    CreateMedicalVocabularyRequest(const CreateMedicalVocabularyRequest &other);
    CreateMedicalVocabularyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMedicalVocabularyRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
