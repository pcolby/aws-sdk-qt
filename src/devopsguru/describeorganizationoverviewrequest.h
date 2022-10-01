// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONOVERVIEWREQUEST_H
#define QTAWS_DESCRIBEORGANIZATIONOVERVIEWREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeOrganizationOverviewRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeOrganizationOverviewRequest : public DevOpsGuruRequest {

public:
    DescribeOrganizationOverviewRequest(const DescribeOrganizationOverviewRequest &other);
    DescribeOrganizationOverviewRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationOverviewRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
