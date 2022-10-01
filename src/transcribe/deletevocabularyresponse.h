// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOCABULARYRESPONSE_H
#define QTAWS_DELETEVOCABULARYRESPONSE_H

#include "transcriberesponse.h"
#include "deletevocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteVocabularyResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteVocabularyResponse : public TranscribeResponse {
    Q_OBJECT

public:
    DeleteVocabularyResponse(const DeleteVocabularyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVocabularyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVocabularyResponse)
    Q_DISABLE_COPY(DeleteVocabularyResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
