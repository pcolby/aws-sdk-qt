// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDICALVOCABULARYREQUEST_H
#define QTAWS_DELETEMEDICALVOCABULARYREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteMedicalVocabularyRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteMedicalVocabularyRequest : public TranscribeRequest {

public:
    DeleteMedicalVocabularyRequest(const DeleteMedicalVocabularyRequest &other);
    DeleteMedicalVocabularyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMedicalVocabularyRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
