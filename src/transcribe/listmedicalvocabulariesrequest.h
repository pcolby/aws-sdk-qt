// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDICALVOCABULARIESREQUEST_H
#define QTAWS_LISTMEDICALVOCABULARIESREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class ListMedicalVocabulariesRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT ListMedicalVocabulariesRequest : public TranscribeRequest {

public:
    ListMedicalVocabulariesRequest(const ListMedicalVocabulariesRequest &other);
    ListMedicalVocabulariesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMedicalVocabulariesRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
