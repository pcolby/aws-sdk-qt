// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHANNELRESPONSE_H
#define QTAWS_STARTCHANNELRESPONSE_H

#include "mediatailorresponse.h"
#include "startchannelrequest.h"

namespace QtAws {
namespace MediaTailor {

class StartChannelResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT StartChannelResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    StartChannelResponse(const StartChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartChannelResponse)
    Q_DISABLE_COPY(StartChannelResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
