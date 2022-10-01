// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERUNRESPONSE_P_H
#define QTAWS_DELETERUNRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteRunResponse;

class DeleteRunResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit DeleteRunResponsePrivate(DeleteRunResponse * const q);

    void parseDeleteRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRunResponse)
    Q_DISABLE_COPY(DeleteRunResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
