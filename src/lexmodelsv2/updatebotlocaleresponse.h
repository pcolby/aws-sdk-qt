// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTLOCALERESPONSE_H
#define QTAWS_UPDATEBOTLOCALERESPONSE_H

#include "lexmodelsv2response.h"
#include "updatebotlocalerequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateBotLocaleResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateBotLocaleResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    UpdateBotLocaleResponse(const UpdateBotLocaleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBotLocaleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBotLocaleResponse)
    Q_DISABLE_COPY(UpdateBotLocaleResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
