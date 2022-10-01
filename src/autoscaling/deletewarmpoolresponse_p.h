// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWARMPOOLRESPONSE_P_H
#define QTAWS_DELETEWARMPOOLRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DeleteWarmPoolResponse;

class DeleteWarmPoolResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DeleteWarmPoolResponsePrivate(DeleteWarmPoolResponse * const q);

    void parseDeleteWarmPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWarmPoolResponse)
    Q_DISABLE_COPY(DeleteWarmPoolResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
