// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOCABULARYFILTERRESPONSE_H
#define QTAWS_UPDATEVOCABULARYFILTERRESPONSE_H

#include "transcriberesponse.h"
#include "updatevocabularyfilterrequest.h"

namespace QtAws {
namespace Transcribe {

class UpdateVocabularyFilterResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT UpdateVocabularyFilterResponse : public TranscribeResponse {
    Q_OBJECT

public:
    UpdateVocabularyFilterResponse(const UpdateVocabularyFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVocabularyFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVocabularyFilterResponse)
    Q_DISABLE_COPY(UpdateVocabularyFilterResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
