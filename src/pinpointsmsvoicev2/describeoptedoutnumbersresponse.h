// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTEDOUTNUMBERSRESPONSE_H
#define QTAWS_DESCRIBEOPTEDOUTNUMBERSRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "describeoptedoutnumbersrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeOptedOutNumbersResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribeOptedOutNumbersResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DescribeOptedOutNumbersResponse(const DescribeOptedOutNumbersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOptedOutNumbersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOptedOutNumbersResponse)
    Q_DISABLE_COPY(DescribeOptedOutNumbersResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
