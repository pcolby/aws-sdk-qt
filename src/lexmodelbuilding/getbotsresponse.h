// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTSRESPONSE_H
#define QTAWS_GETBOTSRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getbotsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotsResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBotsResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetBotsResponse(const GetBotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotsResponse)
    Q_DISABLE_COPY(GetBotsResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
