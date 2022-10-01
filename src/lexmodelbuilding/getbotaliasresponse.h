// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTALIASRESPONSE_H
#define QTAWS_GETBOTALIASRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getbotaliasrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotAliasResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBotAliasResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetBotAliasResponse(const GetBotAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBotAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotAliasResponse)
    Q_DISABLE_COPY(GetBotAliasResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
