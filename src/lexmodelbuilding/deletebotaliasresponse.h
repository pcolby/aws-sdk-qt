// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTALIASRESPONSE_H
#define QTAWS_DELETEBOTALIASRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "deletebotaliasrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteBotAliasResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT DeleteBotAliasResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    DeleteBotAliasResponse(const DeleteBotAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBotAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBotAliasResponse)
    Q_DISABLE_COPY(DeleteBotAliasResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
