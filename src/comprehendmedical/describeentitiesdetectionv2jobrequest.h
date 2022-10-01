// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITIESDETECTIONV2JOBREQUEST_H
#define QTAWS_DESCRIBEENTITIESDETECTIONV2JOBREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeEntitiesDetectionV2JobRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DescribeEntitiesDetectionV2JobRequest : public ComprehendMedicalRequest {

public:
    DescribeEntitiesDetectionV2JobRequest(const DescribeEntitiesDetectionV2JobRequest &other);
    DescribeEntitiesDetectionV2JobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEntitiesDetectionV2JobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
