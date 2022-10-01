// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROFILEREQUEST_H
#define QTAWS_DESCRIBEPROFILEREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeProfileRequestPrivate;

class QTAWSTRANSFER_EXPORT DescribeProfileRequest : public TransferRequest {

public:
    DescribeProfileRequest(const DescribeProfileRequest &other);
    DescribeProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProfileRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
