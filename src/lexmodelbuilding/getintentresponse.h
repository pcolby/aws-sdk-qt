// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTENTRESPONSE_H
#define QTAWS_GETINTENTRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getintentrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetIntentResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetIntentResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetIntentResponse(const GetIntentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIntentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntentResponse)
    Q_DISABLE_COPY(GetIntentResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
