// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORTASKRESPONSE_H
#define QTAWS_POLLFORTASKRESPONSE_H

#include "datapipelineresponse.h"
#include "pollfortaskrequest.h"

namespace QtAws {
namespace DataPipeline {

class PollForTaskResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT PollForTaskResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    PollForTaskResponse(const PollForTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PollForTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PollForTaskResponse)
    Q_DISABLE_COPY(PollForTaskResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
