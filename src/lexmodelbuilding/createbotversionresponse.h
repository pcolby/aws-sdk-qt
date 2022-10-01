// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTVERSIONRESPONSE_H
#define QTAWS_CREATEBOTVERSIONRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "createbotversionrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class CreateBotVersionResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT CreateBotVersionResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    CreateBotVersionResponse(const CreateBotVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBotVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBotVersionResponse)
    Q_DISABLE_COPY(CreateBotVersionResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
