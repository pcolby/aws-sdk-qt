// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBLOGITEMSREQUEST_H
#define QTAWS_DESCRIBEJOBLOGITEMSREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class DescribeJobLogItemsRequestPrivate;

class QTAWSMGN_EXPORT DescribeJobLogItemsRequest : public MgnRequest {

public:
    DescribeJobLogItemsRequest(const DescribeJobLogItemsRequest &other);
    DescribeJobLogItemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobLogItemsRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
