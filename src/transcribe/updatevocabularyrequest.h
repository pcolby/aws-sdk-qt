// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOCABULARYREQUEST_H
#define QTAWS_UPDATEVOCABULARYREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class UpdateVocabularyRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT UpdateVocabularyRequest : public TranscribeRequest {

public:
    UpdateVocabularyRequest(const UpdateVocabularyRequest &other);
    UpdateVocabularyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVocabularyRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
