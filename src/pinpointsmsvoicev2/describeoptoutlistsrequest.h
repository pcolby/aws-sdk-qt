// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTOUTLISTSREQUEST_H
#define QTAWS_DESCRIBEOPTOUTLISTSREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeOptOutListsRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribeOptOutListsRequest : public PinpointSmsVoiceV2Request {

public:
    DescribeOptOutListsRequest(const DescribeOptOutListsRequest &other);
    DescribeOptOutListsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOptOutListsRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
