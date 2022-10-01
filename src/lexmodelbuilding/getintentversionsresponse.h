// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTENTVERSIONSRESPONSE_H
#define QTAWS_GETINTENTVERSIONSRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getintentversionsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetIntentVersionsResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetIntentVersionsResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetIntentVersionsResponse(const GetIntentVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIntentVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntentVersionsResponse)
    Q_DISABLE_COPY(GetIntentVersionsResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
