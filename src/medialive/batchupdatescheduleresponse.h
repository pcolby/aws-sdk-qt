// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATESCHEDULERESPONSE_H
#define QTAWS_BATCHUPDATESCHEDULERESPONSE_H

#include "medialiveresponse.h"
#include "batchupdateschedulerequest.h"

namespace QtAws {
namespace MediaLive {

class BatchUpdateScheduleResponsePrivate;

class QTAWSMEDIALIVE_EXPORT BatchUpdateScheduleResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    BatchUpdateScheduleResponse(const BatchUpdateScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchUpdateScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdateScheduleResponse)
    Q_DISABLE_COPY(BatchUpdateScheduleResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
