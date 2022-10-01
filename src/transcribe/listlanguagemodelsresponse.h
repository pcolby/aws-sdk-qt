// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLANGUAGEMODELSRESPONSE_H
#define QTAWS_LISTLANGUAGEMODELSRESPONSE_H

#include "transcriberesponse.h"
#include "listlanguagemodelsrequest.h"

namespace QtAws {
namespace Transcribe {

class ListLanguageModelsResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT ListLanguageModelsResponse : public TranscribeResponse {
    Q_OBJECT

public:
    ListLanguageModelsResponse(const ListLanguageModelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLanguageModelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLanguageModelsResponse)
    Q_DISABLE_COPY(ListLanguageModelsResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
