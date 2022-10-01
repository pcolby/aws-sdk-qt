// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOCABULARYRESPONSE_H
#define QTAWS_UPDATEVOCABULARYRESPONSE_H

#include "transcriberesponse.h"
#include "updatevocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class UpdateVocabularyResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT UpdateVocabularyResponse : public TranscribeResponse {
    Q_OBJECT

public:
    UpdateVocabularyResponse(const UpdateVocabularyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVocabularyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVocabularyResponse)
    Q_DISABLE_COPY(UpdateVocabularyResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
