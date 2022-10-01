// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTOVERVIEWREQUEST_H
#define QTAWS_DESCRIBEACCOUNTOVERVIEWREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeAccountOverviewRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeAccountOverviewRequest : public DevOpsGuruRequest {

public:
    DescribeAccountOverviewRequest(const DescribeAccountOverviewRequest &other);
    DescribeAccountOverviewRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountOverviewRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
