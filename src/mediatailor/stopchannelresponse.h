// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCHANNELRESPONSE_H
#define QTAWS_STOPCHANNELRESPONSE_H

#include "mediatailorresponse.h"
#include "stopchannelrequest.h"

namespace QtAws {
namespace MediaTailor {

class StopChannelResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT StopChannelResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    StopChannelResponse(const StopChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopChannelResponse)
    Q_DISABLE_COPY(StopChannelResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
