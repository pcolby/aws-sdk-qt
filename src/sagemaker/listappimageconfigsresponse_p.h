// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPIMAGECONFIGSRESPONSE_P_H
#define QTAWS_LISTAPPIMAGECONFIGSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListAppImageConfigsResponse;

class ListAppImageConfigsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListAppImageConfigsResponsePrivate(ListAppImageConfigsResponse * const q);

    void parseListAppImageConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppImageConfigsResponse)
    Q_DISABLE_COPY(ListAppImageConfigsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
