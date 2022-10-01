// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTOUTLISTSRESPONSE_H
#define QTAWS_DESCRIBEOPTOUTLISTSRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "describeoptoutlistsrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeOptOutListsResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribeOptOutListsResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DescribeOptOutListsResponse(const DescribeOptOutListsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOptOutListsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOptOutListsResponse)
    Q_DISABLE_COPY(DescribeOptOutListsResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
