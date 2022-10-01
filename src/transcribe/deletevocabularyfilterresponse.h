// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOCABULARYFILTERRESPONSE_H
#define QTAWS_DELETEVOCABULARYFILTERRESPONSE_H

#include "transcriberesponse.h"
#include "deletevocabularyfilterrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteVocabularyFilterResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteVocabularyFilterResponse : public TranscribeResponse {
    Q_OBJECT

public:
    DeleteVocabularyFilterResponse(const DeleteVocabularyFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVocabularyFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVocabularyFilterResponse)
    Q_DISABLE_COPY(DeleteVocabularyFilterResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
