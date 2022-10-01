// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUILTININTENTRESPONSE_H
#define QTAWS_GETBUILTININTENTRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getbuiltinintentrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBuiltinIntentResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBuiltinIntentResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetBuiltinIntentResponse(const GetBuiltinIntentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBuiltinIntentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBuiltinIntentResponse)
    Q_DISABLE_COPY(GetBuiltinIntentResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
