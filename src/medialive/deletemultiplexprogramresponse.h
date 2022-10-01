// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMULTIPLEXPROGRAMRESPONSE_H
#define QTAWS_DELETEMULTIPLEXPROGRAMRESPONSE_H

#include "medialiveresponse.h"
#include "deletemultiplexprogramrequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteMultiplexProgramResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DeleteMultiplexProgramResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DeleteMultiplexProgramResponse(const DeleteMultiplexProgramRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMultiplexProgramRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMultiplexProgramResponse)
    Q_DISABLE_COPY(DeleteMultiplexProgramResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
