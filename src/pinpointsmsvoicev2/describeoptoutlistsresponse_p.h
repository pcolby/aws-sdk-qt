// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTOUTLISTSRESPONSE_P_H
#define QTAWS_DESCRIBEOPTOUTLISTSRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeOptOutListsResponse;

class DescribeOptOutListsResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DescribeOptOutListsResponsePrivate(DescribeOptOutListsResponse * const q);

    void parseDescribeOptOutListsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOptOutListsResponse)
    Q_DISABLE_COPY(DescribeOptOutListsResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
