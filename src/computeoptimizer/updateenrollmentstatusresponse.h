// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENROLLMENTSTATUSRESPONSE_H
#define QTAWS_UPDATEENROLLMENTSTATUSRESPONSE_H

#include "computeoptimizerresponse.h"
#include "updateenrollmentstatusrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class UpdateEnrollmentStatusResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT UpdateEnrollmentStatusResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    UpdateEnrollmentStatusResponse(const UpdateEnrollmentStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEnrollmentStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEnrollmentStatusResponse)
    Q_DISABLE_COPY(UpdateEnrollmentStatusResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
