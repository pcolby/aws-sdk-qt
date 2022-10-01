// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOCABULARYRESPONSE_H
#define QTAWS_CREATEVOCABULARYRESPONSE_H

#include "connectresponse.h"
#include "createvocabularyrequest.h"

namespace QtAws {
namespace Connect {

class CreateVocabularyResponsePrivate;

class QTAWSCONNECT_EXPORT CreateVocabularyResponse : public ConnectResponse {
    Q_OBJECT

public:
    CreateVocabularyResponse(const CreateVocabularyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVocabularyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVocabularyResponse)
    Q_DISABLE_COPY(CreateVocabularyResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
