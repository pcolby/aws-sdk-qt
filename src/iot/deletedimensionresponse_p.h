// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIMENSIONRESPONSE_P_H
#define QTAWS_DELETEDIMENSIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteDimensionResponse;

class DeleteDimensionResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteDimensionResponsePrivate(DeleteDimensionResponse * const q);

    void parseDeleteDimensionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDimensionResponse)
    Q_DISABLE_COPY(DeleteDimensionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
