// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMEDICALVOCABULARYREQUEST_H
#define QTAWS_UPDATEMEDICALVOCABULARYREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class UpdateMedicalVocabularyRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT UpdateMedicalVocabularyRequest : public TranscribeRequest {

public:
    UpdateMedicalVocabularyRequest(const UpdateMedicalVocabularyRequest &other);
    UpdateMedicalVocabularyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMedicalVocabularyRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
