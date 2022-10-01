// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOCABULARYFILTERRESPONSE_H
#define QTAWS_GETVOCABULARYFILTERRESPONSE_H

#include "transcriberesponse.h"
#include "getvocabularyfilterrequest.h"

namespace QtAws {
namespace Transcribe {

class GetVocabularyFilterResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT GetVocabularyFilterResponse : public TranscribeResponse {
    Q_OBJECT

public:
    GetVocabularyFilterResponse(const GetVocabularyFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVocabularyFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVocabularyFilterResponse)
    Q_DISABLE_COPY(GetVocabularyFilterResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
