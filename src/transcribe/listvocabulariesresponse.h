// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOCABULARIESRESPONSE_H
#define QTAWS_LISTVOCABULARIESRESPONSE_H

#include "transcriberesponse.h"
#include "listvocabulariesrequest.h"

namespace QtAws {
namespace Transcribe {

class ListVocabulariesResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT ListVocabulariesResponse : public TranscribeResponse {
    Q_OBJECT

public:
    ListVocabulariesResponse(const ListVocabulariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVocabulariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVocabulariesResponse)
    Q_DISABLE_COPY(ListVocabulariesResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
