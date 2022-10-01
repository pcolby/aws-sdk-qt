// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBOTALIASRESPONSE_H
#define QTAWS_PUTBOTALIASRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "putbotaliasrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class PutBotAliasResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT PutBotAliasResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    PutBotAliasResponse(const PutBotAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBotAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBotAliasResponse)
    Q_DISABLE_COPY(PutBotAliasResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
