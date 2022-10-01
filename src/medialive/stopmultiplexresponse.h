// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMULTIPLEXRESPONSE_H
#define QTAWS_STOPMULTIPLEXRESPONSE_H

#include "medialiveresponse.h"
#include "stopmultiplexrequest.h"

namespace QtAws {
namespace MediaLive {

class StopMultiplexResponsePrivate;

class QTAWSMEDIALIVE_EXPORT StopMultiplexResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    StopMultiplexResponse(const StopMultiplexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopMultiplexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopMultiplexResponse)
    Q_DISABLE_COPY(StopMultiplexResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
