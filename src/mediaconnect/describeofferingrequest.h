// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOFFERINGREQUEST_H
#define QTAWS_DESCRIBEOFFERINGREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class DescribeOfferingRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT DescribeOfferingRequest : public MediaConnectRequest {

public:
    DescribeOfferingRequest(const DescribeOfferingRequest &other);
    DescribeOfferingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOfferingRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
