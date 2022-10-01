// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOCABULARYFILTERREQUEST_H
#define QTAWS_GETVOCABULARYFILTERREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class GetVocabularyFilterRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT GetVocabularyFilterRequest : public TranscribeRequest {

public:
    GetVocabularyFilterRequest(const GetVocabularyFilterRequest &other);
    GetVocabularyFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVocabularyFilterRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
