// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBFLOWSREQUEST_H
#define QTAWS_DESCRIBEJOBFLOWSREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class DescribeJobFlowsRequestPrivate;

class QTAWSEMR_EXPORT DescribeJobFlowsRequest : public EmrRequest {

public:
    DescribeJobFlowsRequest(const DescribeJobFlowsRequest &other);
    DescribeJobFlowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobFlowsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
