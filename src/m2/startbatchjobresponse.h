// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBATCHJOBRESPONSE_H
#define QTAWS_STARTBATCHJOBRESPONSE_H

#include "m2response.h"
#include "startbatchjobrequest.h"

namespace QtAws {
namespace M2 {

class StartBatchJobResponsePrivate;

class QTAWSM2_EXPORT StartBatchJobResponse : public M2Response {
    Q_OBJECT

public:
    StartBatchJobResponse(const StartBatchJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartBatchJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBatchJobResponse)
    Q_DISABLE_COPY(StartBatchJobResponse)

};

} // namespace M2
} // namespace QtAws

#endif
