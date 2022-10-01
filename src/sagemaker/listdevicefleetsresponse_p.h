// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEFLEETSRESPONSE_P_H
#define QTAWS_LISTDEVICEFLEETSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListDeviceFleetsResponse;

class ListDeviceFleetsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListDeviceFleetsResponsePrivate(ListDeviceFleetsResponse * const q);

    void parseListDeviceFleetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeviceFleetsResponse)
    Q_DISABLE_COPY(ListDeviceFleetsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
