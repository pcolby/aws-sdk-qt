// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTSRESPONSE_P_H
#define QTAWS_LISTENVIRONMENTSRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class ListEnvironmentsResponse;

class ListEnvironmentsResponsePrivate : public M2ResponsePrivate {

public:

    explicit ListEnvironmentsResponsePrivate(ListEnvironmentsResponse * const q);

    void parseListEnvironmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentsResponse)
    Q_DISABLE_COPY(ListEnvironmentsResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
