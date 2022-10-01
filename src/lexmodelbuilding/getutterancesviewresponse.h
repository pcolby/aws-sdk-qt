// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUTTERANCESVIEWRESPONSE_H
#define QTAWS_GETUTTERANCESVIEWRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getutterancesviewrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetUtterancesViewResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetUtterancesViewResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetUtterancesViewResponse(const GetUtterancesViewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUtterancesViewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUtterancesViewResponse)
    Q_DISABLE_COPY(GetUtterancesViewResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
