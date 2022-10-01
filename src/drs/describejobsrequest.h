// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBSREQUEST_H
#define QTAWS_DESCRIBEJOBSREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class DescribeJobsRequestPrivate;

class QTAWSDRS_EXPORT DescribeJobsRequest : public DrsRequest {

public:
    DescribeJobsRequest(const DescribeJobsRequest &other);
    DescribeJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobsRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
