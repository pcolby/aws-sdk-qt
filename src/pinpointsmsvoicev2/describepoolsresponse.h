// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPOOLSRESPONSE_H
#define QTAWS_DESCRIBEPOOLSRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "describepoolsrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribePoolsResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribePoolsResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DescribePoolsResponse(const DescribePoolsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePoolsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePoolsResponse)
    Q_DISABLE_COPY(DescribePoolsResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
