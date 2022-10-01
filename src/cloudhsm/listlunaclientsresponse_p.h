// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLUNACLIENTSRESPONSE_P_H
#define QTAWS_LISTLUNACLIENTSRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class ListLunaClientsResponse;

class ListLunaClientsResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit ListLunaClientsResponsePrivate(ListLunaClientsResponse * const q);

    void parseListLunaClientsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLunaClientsResponse)
    Q_DISABLE_COPY(ListLunaClientsResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
