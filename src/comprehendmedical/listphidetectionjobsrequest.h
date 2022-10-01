// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPHIDETECTIONJOBSREQUEST_H
#define QTAWS_LISTPHIDETECTIONJOBSREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ListPHIDetectionJobsRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT ListPHIDetectionJobsRequest : public ComprehendMedicalRequest {

public:
    ListPHIDetectionJobsRequest(const ListPHIDetectionJobsRequest &other);
    ListPHIDetectionJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPHIDetectionJobsRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
