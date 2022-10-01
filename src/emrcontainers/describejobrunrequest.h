// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBRUNREQUEST_H
#define QTAWS_DESCRIBEJOBRUNREQUEST_H

#include "emrcontainersrequest.h"

namespace QtAws {
namespace Emrcontainers {

class DescribeJobRunRequestPrivate;

class QTAWSEMRCONTAINERS_EXPORT DescribeJobRunRequest : public EmrcontainersRequest {

public:
    DescribeJobRunRequest(const DescribeJobRunRequest &other);
    DescribeJobRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobRunRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
