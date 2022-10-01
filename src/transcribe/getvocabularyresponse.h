// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOCABULARYRESPONSE_H
#define QTAWS_GETVOCABULARYRESPONSE_H

#include "transcriberesponse.h"
#include "getvocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class GetVocabularyResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT GetVocabularyResponse : public TranscribeResponse {
    Q_OBJECT

public:
    GetVocabularyResponse(const GetVocabularyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVocabularyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVocabularyResponse)
    Q_DISABLE_COPY(GetVocabularyResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
