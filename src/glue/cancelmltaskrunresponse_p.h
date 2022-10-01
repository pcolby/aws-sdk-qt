// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMLTASKRUNRESPONSE_P_H
#define QTAWS_CANCELMLTASKRUNRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CancelMLTaskRunResponse;

class CancelMLTaskRunResponsePrivate : public GlueResponsePrivate {

public:

    explicit CancelMLTaskRunResponsePrivate(CancelMLTaskRunResponse * const q);

    void parseCancelMLTaskRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelMLTaskRunResponse)
    Q_DISABLE_COPY(CancelMLTaskRunResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
