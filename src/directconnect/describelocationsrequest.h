// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONSREQUEST_H
#define QTAWS_DESCRIBELOCATIONSREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeLocationsRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeLocationsRequest : public DirectConnectRequest {

public:
    DescribeLocationsRequest(const DescribeLocationsRequest &other);
    DescribeLocationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
