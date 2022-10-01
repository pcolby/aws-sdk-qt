// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENDSTATISTICSRESPONSE_P_H
#define QTAWS_GETSENDSTATISTICSRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class GetSendStatisticsResponse;

class GetSendStatisticsResponsePrivate : public SesResponsePrivate {

public:

    explicit GetSendStatisticsResponsePrivate(GetSendStatisticsResponse * const q);

    void parseGetSendStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSendStatisticsResponse)
    Q_DISABLE_COPY(GetSendStatisticsResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
