// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCESRESPONSE_P_H
#define QTAWS_LISTINSTANCESRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class ListInstancesResponse;

class ListInstancesResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit ListInstancesResponsePrivate(ListInstancesResponse * const q);

    void parseListInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInstancesResponse)
    Q_DISABLE_COPY(ListInstancesResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
