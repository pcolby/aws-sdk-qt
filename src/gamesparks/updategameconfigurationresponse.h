// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMECONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEGAMECONFIGURATIONRESPONSE_H

#include "gamesparksresponse.h"
#include "updategameconfigurationrequest.h"

namespace QtAws {
namespace GameSparks {

class UpdateGameConfigurationResponsePrivate;

class QTAWSGAMESPARKS_EXPORT UpdateGameConfigurationResponse : public GameSparksResponse {
    Q_OBJECT

public:
    UpdateGameConfigurationResponse(const UpdateGameConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGameConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGameConfigurationResponse)
    Q_DISABLE_COPY(UpdateGameConfigurationResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
