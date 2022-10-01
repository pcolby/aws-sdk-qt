// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTWARMPOOLRESPONSE_P_H
#define QTAWS_PUTWARMPOOLRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class PutWarmPoolResponse;

class PutWarmPoolResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit PutWarmPoolResponsePrivate(PutWarmPoolResponse * const q);

    void parsePutWarmPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutWarmPoolResponse)
    Q_DISABLE_COPY(PutWarmPoolResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
