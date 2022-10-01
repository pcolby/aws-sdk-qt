// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGERESPONSE_H
#define QTAWS_GETSTAGERESPONSE_H

#include "gamesparksresponse.h"
#include "getstagerequest.h"

namespace QtAws {
namespace GameSparks {

class GetStageResponsePrivate;

class QTAWSGAMESPARKS_EXPORT GetStageResponse : public GameSparksResponse {
    Q_OBJECT

public:
    GetStageResponse(const GetStageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStageResponse)
    Q_DISABLE_COPY(GetStageResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
