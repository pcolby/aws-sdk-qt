// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELISTENERREQUEST_H
#define QTAWS_DESCRIBELISTENERREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeListenerRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeListenerRequest : public GlobalAcceleratorRequest {

public:
    DescribeListenerRequest(const DescribeListenerRequest &other);
    DescribeListenerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeListenerRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
