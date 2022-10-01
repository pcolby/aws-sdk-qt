// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLAYBACKCONFIGURATIONRESPONSE_H
#define QTAWS_GETPLAYBACKCONFIGURATIONRESPONSE_H

#include "mediatailorresponse.h"
#include "getplaybackconfigurationrequest.h"

namespace QtAws {
namespace MediaTailor {

class GetPlaybackConfigurationResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT GetPlaybackConfigurationResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    GetPlaybackConfigurationResponse(const GetPlaybackConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPlaybackConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPlaybackConfigurationResponse)
    Q_DISABLE_COPY(GetPlaybackConfigurationResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
