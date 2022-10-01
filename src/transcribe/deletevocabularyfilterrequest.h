// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOCABULARYFILTERREQUEST_H
#define QTAWS_DELETEVOCABULARYFILTERREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteVocabularyFilterRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteVocabularyFilterRequest : public TranscribeRequest {

public:
    DeleteVocabularyFilterRequest(const DeleteVocabularyFilterRequest &other);
    DeleteVocabularyFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVocabularyFilterRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
