// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIPLEXPROGRAMRESPONSE_H
#define QTAWS_CREATEMULTIPLEXPROGRAMRESPONSE_H

#include "medialiveresponse.h"
#include "createmultiplexprogramrequest.h"

namespace QtAws {
namespace MediaLive {

class CreateMultiplexProgramResponsePrivate;

class QTAWSMEDIALIVE_EXPORT CreateMultiplexProgramResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    CreateMultiplexProgramResponse(const CreateMultiplexProgramRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMultiplexProgramRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMultiplexProgramResponse)
    Q_DISABLE_COPY(CreateMultiplexProgramResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
