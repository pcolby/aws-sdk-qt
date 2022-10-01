// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTATTRIBUTESRESPONSE_H
#define QTAWS_DESCRIBEACCOUNTATTRIBUTESRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "describeaccountattributesrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeAccountAttributesResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribeAccountAttributesResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DescribeAccountAttributesResponse(const DescribeAccountAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccountAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountAttributesResponse)
    Q_DISABLE_COPY(DescribeAccountAttributesResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
