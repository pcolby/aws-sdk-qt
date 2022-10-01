// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXECUTIONRESPONSE_P_H
#define QTAWS_STARTEXECUTIONRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class StartExecutionResponse;

class StartExecutionResponsePrivate : public SfnResponsePrivate {

public:

    explicit StartExecutionResponsePrivate(StartExecutionResponse * const q);

    void parseStartExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartExecutionResponse)
    Q_DISABLE_COPY(StartExecutionResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
