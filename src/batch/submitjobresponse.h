// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITJOBRESPONSE_H
#define QTAWS_SUBMITJOBRESPONSE_H

#include "batchresponse.h"
#include "submitjobrequest.h"

namespace QtAws {
namespace Batch {

class SubmitJobResponsePrivate;

class QTAWSBATCH_EXPORT SubmitJobResponse : public BatchResponse {
    Q_OBJECT

public:
    SubmitJobResponse(const SubmitJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SubmitJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubmitJobResponse)
    Q_DISABLE_COPY(SubmitJobResponse)

};

} // namespace Batch
} // namespace QtAws

#endif
