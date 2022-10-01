// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENROLLMENTSTATUSRESPONSE_H
#define QTAWS_GETENROLLMENTSTATUSRESPONSE_H

#include "computeoptimizerresponse.h"
#include "getenrollmentstatusrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEnrollmentStatusResponsePrivate;

class QTAWSCOMPUTEOPTIMIZER_EXPORT GetEnrollmentStatusResponse : public ComputeOptimizerResponse {
    Q_OBJECT

public:
    GetEnrollmentStatusResponse(const GetEnrollmentStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEnrollmentStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnrollmentStatusResponse)
    Q_DISABLE_COPY(GetEnrollmentStatusResponse)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
