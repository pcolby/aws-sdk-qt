// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGEDEVICESRESPONSE_P_H
#define QTAWS_LISTSTAGEDEVICESRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListStageDevicesResponse;

class ListStageDevicesResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListStageDevicesResponsePrivate(ListStageDevicesResponse * const q);

    void parseListStageDevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStageDevicesResponse)
    Q_DISABLE_COPY(ListStageDevicesResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
