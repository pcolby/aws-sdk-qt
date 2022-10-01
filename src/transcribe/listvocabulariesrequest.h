// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOCABULARIESREQUEST_H
#define QTAWS_LISTVOCABULARIESREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class ListVocabulariesRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT ListVocabulariesRequest : public TranscribeRequest {

public:
    ListVocabulariesRequest(const ListVocabulariesRequest &other);
    ListVocabulariesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVocabulariesRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
