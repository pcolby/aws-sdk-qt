// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBOTRESPONSE_H
#define QTAWS_PUTBOTRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "putbotrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class PutBotResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT PutBotResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    PutBotResponse(const PutBotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBotResponse)
    Q_DISABLE_COPY(PutBotResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
