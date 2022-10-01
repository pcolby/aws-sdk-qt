// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTVERSIONSRESPONSE_H
#define QTAWS_GETBOTVERSIONSRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getbotversionsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotVersionsResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBotVersionsResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetBotVersionsResponse(const GetBotVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBotVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotVersionsResponse)
    Q_DISABLE_COPY(GetBotVersionsResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
