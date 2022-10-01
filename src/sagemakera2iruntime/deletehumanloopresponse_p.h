// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHUMANLOOPRESPONSE_P_H
#define QTAWS_DELETEHUMANLOOPRESPONSE_P_H

#include "sagemakera2iruntimeresponse_p.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class DeleteHumanLoopResponse;

class DeleteHumanLoopResponsePrivate : public SageMakerA2IRuntimeResponsePrivate {

public:

    explicit DeleteHumanLoopResponsePrivate(DeleteHumanLoopResponse * const q);

    void parseDeleteHumanLoopResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteHumanLoopResponse)
    Q_DISABLE_COPY(DeleteHumanLoopResponsePrivate)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
