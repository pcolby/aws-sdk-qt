// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTKEYREQUEST_H
#define QTAWS_DESCRIBEHOSTKEYREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeHostKeyRequestPrivate;

class QTAWSTRANSFER_EXPORT DescribeHostKeyRequest : public TransferRequest {

public:
    DescribeHostKeyRequest(const DescribeHostKeyRequest &other);
    DescribeHostKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHostKeyRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
