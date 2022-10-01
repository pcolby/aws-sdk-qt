// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESENDERIDSREQUEST_H
#define QTAWS_DESCRIBESENDERIDSREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeSenderIdsRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribeSenderIdsRequest : public PinpointSmsVoiceV2Request {

public:
    DescribeSenderIdsRequest(const DescribeSenderIdsRequest &other);
    DescribeSenderIdsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSenderIdsRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
