// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITIESDETECTIONV2JOBRESPONSE_H
#define QTAWS_DESCRIBEENTITIESDETECTIONV2JOBRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "describeentitiesdetectionv2jobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeEntitiesDetectionV2JobResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DescribeEntitiesDetectionV2JobResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    DescribeEntitiesDetectionV2JobResponse(const DescribeEntitiesDetectionV2JobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEntitiesDetectionV2JobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEntitiesDetectionV2JobResponse)
    Q_DISABLE_COPY(DescribeEntitiesDetectionV2JobResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
