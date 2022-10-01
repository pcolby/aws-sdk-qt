// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBQUEUERESPONSE_H
#define QTAWS_CREATEJOBQUEUERESPONSE_H

#include "batchresponse.h"
#include "createjobqueuerequest.h"

namespace QtAws {
namespace Batch {

class CreateJobQueueResponsePrivate;

class QTAWSBATCH_EXPORT CreateJobQueueResponse : public BatchResponse {
    Q_OBJECT

public:
    CreateJobQueueResponse(const CreateJobQueueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateJobQueueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateJobQueueResponse)
    Q_DISABLE_COPY(CreateJobQueueResponse)

};

} // namespace Batch
} // namespace QtAws

#endif
