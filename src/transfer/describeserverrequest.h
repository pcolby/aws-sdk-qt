// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVERREQUEST_H
#define QTAWS_DESCRIBESERVERREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeServerRequestPrivate;

class QTAWSTRANSFER_EXPORT DescribeServerRequest : public TransferRequest {

public:
    DescribeServerRequest(const DescribeServerRequest &other);
    DescribeServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServerRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
