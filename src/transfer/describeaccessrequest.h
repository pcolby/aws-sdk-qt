// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSREQUEST_H
#define QTAWS_DESCRIBEACCESSREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeAccessRequestPrivate;

class QTAWSTRANSFER_EXPORT DescribeAccessRequest : public TransferRequest {

public:
    DescribeAccessRequest(const DescribeAccessRequest &other);
    DescribeAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccessRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
