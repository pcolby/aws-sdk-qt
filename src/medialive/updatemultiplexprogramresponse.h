// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMULTIPLEXPROGRAMRESPONSE_H
#define QTAWS_UPDATEMULTIPLEXPROGRAMRESPONSE_H

#include "medialiveresponse.h"
#include "updatemultiplexprogramrequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateMultiplexProgramResponsePrivate;

class QTAWSMEDIALIVE_EXPORT UpdateMultiplexProgramResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    UpdateMultiplexProgramResponse(const UpdateMultiplexProgramRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMultiplexProgramRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMultiplexProgramResponse)
    Q_DISABLE_COPY(UpdateMultiplexProgramResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
