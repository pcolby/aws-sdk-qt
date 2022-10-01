// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTENTRESPONSE_H
#define QTAWS_DELETEINTENTRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "deleteintentrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteIntentResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT DeleteIntentResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    DeleteIntentResponse(const DeleteIntentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIntentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIntentResponse)
    Q_DISABLE_COPY(DeleteIntentResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
