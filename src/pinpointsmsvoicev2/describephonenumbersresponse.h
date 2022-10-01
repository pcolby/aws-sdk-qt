// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPHONENUMBERSRESPONSE_H
#define QTAWS_DESCRIBEPHONENUMBERSRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "describephonenumbersrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribePhoneNumbersResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribePhoneNumbersResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DescribePhoneNumbersResponse(const DescribePhoneNumbersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePhoneNumbersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePhoneNumbersResponse)
    Q_DISABLE_COPY(DescribePhoneNumbersResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
