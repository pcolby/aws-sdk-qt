// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTRESPONSE_H
#define QTAWS_DELETEBOTRESPONSE_H

#include "lexmodelsv2response.h"
#include "deletebotrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteBotResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteBotResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DeleteBotResponse(const DeleteBotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBotResponse)
    Q_DISABLE_COPY(DeleteBotResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
