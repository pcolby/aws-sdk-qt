// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPOOLSREQUEST_H
#define QTAWS_DESCRIBEPOOLSREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribePoolsRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribePoolsRequest : public PinpointSmsVoiceV2Request {

public:
    DescribePoolsRequest(const DescribePoolsRequest &other);
    DescribePoolsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePoolsRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
