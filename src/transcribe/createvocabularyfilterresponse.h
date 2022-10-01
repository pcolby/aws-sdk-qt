// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOCABULARYFILTERRESPONSE_H
#define QTAWS_CREATEVOCABULARYFILTERRESPONSE_H

#include "transcriberesponse.h"
#include "createvocabularyfilterrequest.h"

namespace QtAws {
namespace Transcribe {

class CreateVocabularyFilterResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT CreateVocabularyFilterResponse : public TranscribeResponse {
    Q_OBJECT

public:
    CreateVocabularyFilterResponse(const CreateVocabularyFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVocabularyFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVocabularyFilterResponse)
    Q_DISABLE_COPY(CreateVocabularyFilterResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
