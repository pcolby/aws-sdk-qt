// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGAMECONFIGURATIONRESPONSE_H
#define QTAWS_GETGAMECONFIGURATIONRESPONSE_H

#include "gamesparksresponse.h"
#include "getgameconfigurationrequest.h"

namespace QtAws {
namespace GameSparks {

class GetGameConfigurationResponsePrivate;

class QTAWSGAMESPARKS_EXPORT GetGameConfigurationResponse : public GameSparksResponse {
    Q_OBJECT

public:
    GetGameConfigurationResponse(const GetGameConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGameConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGameConfigurationResponse)
    Q_DISABLE_COPY(GetGameConfigurationResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
