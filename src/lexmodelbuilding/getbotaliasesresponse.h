// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTALIASESRESPONSE_H
#define QTAWS_GETBOTALIASESRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getbotaliasesrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotAliasesResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBotAliasesResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetBotAliasesResponse(const GetBotAliasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBotAliasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotAliasesResponse)
    Q_DISABLE_COPY(GetBotAliasesResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
