// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBTEMPLATERESPONSE_P_H
#define QTAWS_DELETEJOBTEMPLATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteJobTemplateResponse;

class DeleteJobTemplateResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteJobTemplateResponsePrivate(DeleteJobTemplateResponse * const q);

    void parseDeleteJobTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteJobTemplateResponse)
    Q_DISABLE_COPY(DeleteJobTemplateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
