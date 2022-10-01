// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTRESPONSE_H
#define QTAWS_GETBOTRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getbotrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBotResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetBotResponse(const GetBotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotResponse)
    Q_DISABLE_COPY(GetBotResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
