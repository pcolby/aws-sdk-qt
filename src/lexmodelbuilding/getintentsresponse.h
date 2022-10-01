// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTENTSRESPONSE_H
#define QTAWS_GETINTENTSRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getintentsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetIntentsResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetIntentsResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetIntentsResponse(const GetIntentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIntentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntentsResponse)
    Q_DISABLE_COPY(GetIntentsResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
