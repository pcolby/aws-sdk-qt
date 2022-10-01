// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOCABULARYFILTERREQUEST_H
#define QTAWS_CREATEVOCABULARYFILTERREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class CreateVocabularyFilterRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT CreateVocabularyFilterRequest : public TranscribeRequest {

public:
    CreateVocabularyFilterRequest(const CreateVocabularyFilterRequest &other);
    CreateVocabularyFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVocabularyFilterRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
