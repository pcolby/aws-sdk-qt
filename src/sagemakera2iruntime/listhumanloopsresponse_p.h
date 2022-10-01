// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHUMANLOOPSRESPONSE_P_H
#define QTAWS_LISTHUMANLOOPSRESPONSE_P_H

#include "sagemakera2iruntimeresponse_p.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class ListHumanLoopsResponse;

class ListHumanLoopsResponsePrivate : public SageMakerA2IRuntimeResponsePrivate {

public:

    explicit ListHumanLoopsResponsePrivate(ListHumanLoopsResponse * const q);

    void parseListHumanLoopsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHumanLoopsResponse)
    Q_DISABLE_COPY(ListHumanLoopsResponsePrivate)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
