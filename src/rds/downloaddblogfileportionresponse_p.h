// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DOWNLOADDBLOGFILEPORTIONRESPONSE_P_H
#define QTAWS_DOWNLOADDBLOGFILEPORTIONRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DownloadDBLogFilePortionResponse;

class DownloadDBLogFilePortionResponsePrivate : public RdsResponsePrivate {

public:

    explicit DownloadDBLogFilePortionResponsePrivate(DownloadDBLogFilePortionResponse * const q);

    void parseDownloadDBLogFilePortionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DownloadDBLogFilePortionResponse)
    Q_DISABLE_COPY(DownloadDBLogFilePortionResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
