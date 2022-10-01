// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYWORDSREQUEST_H
#define QTAWS_DESCRIBEKEYWORDSREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeKeywordsRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribeKeywordsRequest : public PinpointSmsVoiceV2Request {

public:
    DescribeKeywordsRequest(const DescribeKeywordsRequest &other);
    DescribeKeywordsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeKeywordsRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
