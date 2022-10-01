// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPLAYBACKCONFIGURATIONRESPONSE_H
#define QTAWS_PUTPLAYBACKCONFIGURATIONRESPONSE_H

#include "mediatailorresponse.h"
#include "putplaybackconfigurationrequest.h"

namespace QtAws {
namespace MediaTailor {

class PutPlaybackConfigurationResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT PutPlaybackConfigurationResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    PutPlaybackConfigurationResponse(const PutPlaybackConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutPlaybackConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPlaybackConfigurationResponse)
    Q_DISABLE_COPY(PutPlaybackConfigurationResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
