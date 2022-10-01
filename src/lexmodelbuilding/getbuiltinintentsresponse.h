// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUILTININTENTSRESPONSE_H
#define QTAWS_GETBUILTININTENTSRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getbuiltinintentsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBuiltinIntentsResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBuiltinIntentsResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetBuiltinIntentsResponse(const GetBuiltinIntentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBuiltinIntentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBuiltinIntentsResponse)
    Q_DISABLE_COPY(GetBuiltinIntentsResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
