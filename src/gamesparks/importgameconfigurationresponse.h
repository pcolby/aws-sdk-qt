// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTGAMECONFIGURATIONRESPONSE_H
#define QTAWS_IMPORTGAMECONFIGURATIONRESPONSE_H

#include "gamesparksresponse.h"
#include "importgameconfigurationrequest.h"

namespace QtAws {
namespace GameSparks {

class ImportGameConfigurationResponsePrivate;

class QTAWSGAMESPARKS_EXPORT ImportGameConfigurationResponse : public GameSparksResponse {
    Q_OBJECT

public:
    ImportGameConfigurationResponse(const ImportGameConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportGameConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportGameConfigurationResponse)
    Q_DISABLE_COPY(ImportGameConfigurationResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
