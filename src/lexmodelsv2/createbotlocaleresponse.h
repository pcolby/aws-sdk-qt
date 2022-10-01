// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTLOCALERESPONSE_H
#define QTAWS_CREATEBOTLOCALERESPONSE_H

#include "lexmodelsv2response.h"
#include "createbotlocalerequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotLocaleResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT CreateBotLocaleResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    CreateBotLocaleResponse(const CreateBotLocaleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBotLocaleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBotLocaleResponse)
    Q_DISABLE_COPY(CreateBotLocaleResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
