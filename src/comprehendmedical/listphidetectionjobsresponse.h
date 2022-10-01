// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHIDETECTIONJOBSRESPONSE_H
#define QTAWS_LISTPHIDETECTIONJOBSRESPONSE_H

#include "comprehendmedicalresponse.h"
#include "listphidetectionjobsrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListPHIDetectionJobsResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT ListPHIDetectionJobsResponse : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    ListPHIDetectionJobsResponse(const ListPHIDetectionJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPHIDetectionJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPHIDetectionJobsResponse)
    Q_DISABLE_COPY(ListPHIDetectionJobsResponse)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
