// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAMPLESRESPONSE_P_H
#define QTAWS_LISTSAMPLESRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListSamplesResponse;

class ListSamplesResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListSamplesResponsePrivate(ListSamplesResponse * const q);

    void parseListSamplesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSamplesResponse)
    Q_DISABLE_COPY(ListSamplesResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
