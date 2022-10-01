// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTRESPONSE_H
#define QTAWS_DELETEBOTRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "deletebotrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteBotResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT DeleteBotResponse : public LexModelBuildingResponse {
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

} // namespace LexModelBuilding
} // namespace QtAws

#endif
