// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEJOBRESPONSE_H
#define QTAWS_TERMINATEJOBRESPONSE_H

#include "batchresponse.h"
#include "terminatejobrequest.h"

namespace QtAws {
namespace Batch {

class TerminateJobResponsePrivate;

class QTAWSBATCH_EXPORT TerminateJobResponse : public BatchResponse {
    Q_OBJECT

public:
    TerminateJobResponse(const TerminateJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TerminateJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateJobResponse)
    Q_DISABLE_COPY(TerminateJobResponse)

};

} // namespace Batch
} // namespace QtAws

#endif
