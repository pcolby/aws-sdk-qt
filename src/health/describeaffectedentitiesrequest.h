// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAFFECTEDENTITIESREQUEST_H
#define QTAWS_DESCRIBEAFFECTEDENTITIESREQUEST_H

#include "healthrequest.h"

namespace QtAws {
namespace Health {

class DescribeAffectedEntitiesRequestPrivate;

class QTAWSHEALTH_EXPORT DescribeAffectedEntitiesRequest : public HealthRequest {

public:
    DescribeAffectedEntitiesRequest(const DescribeAffectedEntitiesRequest &other);
    DescribeAffectedEntitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAffectedEntitiesRequest)

};

} // namespace Health
} // namespace QtAws

#endif
