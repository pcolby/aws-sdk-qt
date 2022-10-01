// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINTERCONNECTSREQUEST_H
#define QTAWS_DESCRIBEINTERCONNECTSREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeInterconnectsRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeInterconnectsRequest : public DirectConnectRequest {

public:
    DescribeInterconnectsRequest(const DescribeInterconnectsRequest &other);
    DescribeInterconnectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInterconnectsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
