// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUNIQUEPROBLEMSRESPONSE_P_H
#define QTAWS_LISTUNIQUEPROBLEMSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListUniqueProblemsResponse;

class ListUniqueProblemsResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListUniqueProblemsResponsePrivate(ListUniqueProblemsResponse * const q);

    void parseListUniqueProblemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUniqueProblemsResponse)
    Q_DISABLE_COPY(ListUniqueProblemsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
