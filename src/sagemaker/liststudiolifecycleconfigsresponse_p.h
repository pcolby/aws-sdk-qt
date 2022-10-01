// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOLIFECYCLECONFIGSRESPONSE_P_H
#define QTAWS_LISTSTUDIOLIFECYCLECONFIGSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListStudioLifecycleConfigsResponse;

class ListStudioLifecycleConfigsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListStudioLifecycleConfigsResponsePrivate(ListStudioLifecycleConfigsResponse * const q);

    void parseListStudioLifecycleConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStudioLifecycleConfigsResponse)
    Q_DISABLE_COPY(ListStudioLifecycleConfigsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
