// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMULTIPLEXRESPONSE_H
#define QTAWS_STARTMULTIPLEXRESPONSE_H

#include "medialiveresponse.h"
#include "startmultiplexrequest.h"

namespace QtAws {
namespace MediaLive {

class StartMultiplexResponsePrivate;

class QTAWSMEDIALIVE_EXPORT StartMultiplexResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    StartMultiplexResponse(const StartMultiplexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMultiplexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMultiplexResponse)
    Q_DISABLE_COPY(StartMultiplexResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
