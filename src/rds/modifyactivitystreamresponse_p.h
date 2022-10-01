// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYACTIVITYSTREAMRESPONSE_P_H
#define QTAWS_MODIFYACTIVITYSTREAMRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyActivityStreamResponse;

class ModifyActivityStreamResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyActivityStreamResponsePrivate(ModifyActivityStreamResponse * const q);

    void parseModifyActivityStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyActivityStreamResponse)
    Q_DISABLE_COPY(ModifyActivityStreamResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
