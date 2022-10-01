// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTOPRESPONSE_H
#define QTAWS_BATCHSTOPRESPONSE_H

#include "medialiveresponse.h"
#include "batchstoprequest.h"

namespace QtAws {
namespace MediaLive {

class BatchStopResponsePrivate;

class QTAWSMEDIALIVE_EXPORT BatchStopResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    BatchStopResponse(const BatchStopRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchStopRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchStopResponse)
    Q_DISABLE_COPY(BatchStopResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
