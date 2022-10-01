// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIVITYTASKRESPONSE_P_H
#define QTAWS_GETACTIVITYTASKRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class GetActivityTaskResponse;

class GetActivityTaskResponsePrivate : public SfnResponsePrivate {

public:

    explicit GetActivityTaskResponsePrivate(GetActivityTaskResponse * const q);

    void parseGetActivityTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetActivityTaskResponse)
    Q_DISABLE_COPY(GetActivityTaskResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
