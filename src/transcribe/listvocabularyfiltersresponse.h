// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOCABULARYFILTERSRESPONSE_H
#define QTAWS_LISTVOCABULARYFILTERSRESPONSE_H

#include "transcriberesponse.h"
#include "listvocabularyfiltersrequest.h"

namespace QtAws {
namespace Transcribe {

class ListVocabularyFiltersResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT ListVocabularyFiltersResponse : public TranscribeResponse {
    Q_OBJECT

public:
    ListVocabularyFiltersResponse(const ListVocabularyFiltersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVocabularyFiltersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVocabularyFiltersResponse)
    Q_DISABLE_COPY(ListVocabularyFiltersResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
