// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOCABULARYFILTERSREQUEST_H
#define QTAWS_LISTVOCABULARYFILTERSREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class ListVocabularyFiltersRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT ListVocabularyFiltersRequest : public TranscribeRequest {

public:
    ListVocabularyFiltersRequest(const ListVocabularyFiltersRequest &other);
    ListVocabularyFiltersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVocabularyFiltersRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
