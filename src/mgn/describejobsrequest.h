// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBSREQUEST_H
#define QTAWS_DESCRIBEJOBSREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class DescribeJobsRequestPrivate;

class QTAWSMGN_EXPORT DescribeJobsRequest : public MgnRequest {

public:
    DescribeJobsRequest(const DescribeJobsRequest &other);
    DescribeJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobsRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
