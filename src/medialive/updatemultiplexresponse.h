// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMULTIPLEXRESPONSE_H
#define QTAWS_UPDATEMULTIPLEXRESPONSE_H

#include "medialiveresponse.h"
#include "updatemultiplexrequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateMultiplexResponsePrivate;

class QTAWSMEDIALIVE_EXPORT UpdateMultiplexResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    UpdateMultiplexResponse(const UpdateMultiplexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMultiplexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMultiplexResponse)
    Q_DISABLE_COPY(UpdateMultiplexResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
