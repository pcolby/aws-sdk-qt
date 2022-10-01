// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTLOCALERESPONSE_H
#define QTAWS_DELETEBOTLOCALERESPONSE_H

#include "lexmodelsv2response.h"
#include "deletebotlocalerequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteBotLocaleResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteBotLocaleResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DeleteBotLocaleResponse(const DeleteBotLocaleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBotLocaleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBotLocaleResponse)
    Q_DISABLE_COPY(DeleteBotLocaleResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
