// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTARTRESPONSE_H
#define QTAWS_BATCHSTARTRESPONSE_H

#include "medialiveresponse.h"
#include "batchstartrequest.h"

namespace QtAws {
namespace MediaLive {

class BatchStartResponsePrivate;

class QTAWSMEDIALIVE_EXPORT BatchStartResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    BatchStartResponse(const BatchStartRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchStartRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchStartResponse)
    Q_DISABLE_COPY(BatchStartResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
