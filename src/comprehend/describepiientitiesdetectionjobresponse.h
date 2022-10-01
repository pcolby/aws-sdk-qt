// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIIENTITIESDETECTIONJOBRESPONSE_H
#define QTAWS_DESCRIBEPIIENTITIESDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "describepiientitiesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribePiiEntitiesDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DescribePiiEntitiesDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DescribePiiEntitiesDetectionJobResponse(const DescribePiiEntitiesDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePiiEntitiesDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePiiEntitiesDetectionJobResponse)
    Q_DISABLE_COPY(DescribePiiEntitiesDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
