// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTHORIZERREQUEST_H
#define QTAWS_DESCRIBEAUTHORIZERREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuthorizerRequestPrivate;

class QTAWSIOT_EXPORT DescribeAuthorizerRequest : public IoTRequest {

public:
    DescribeAuthorizerRequest(const DescribeAuthorizerRequest &other);
    DescribeAuthorizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAuthorizerRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
