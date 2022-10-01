// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCESRESPONSE_P_H
#define QTAWS_LISTAPPINSTANCESRESPONSE_P_H

#include "chimesdkidentityresponse_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ListAppInstancesResponse;

class ListAppInstancesResponsePrivate : public ChimeSdkIdentityResponsePrivate {

public:

    explicit ListAppInstancesResponsePrivate(ListAppInstancesResponse * const q);

    void parseListAppInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppInstancesResponse)
    Q_DISABLE_COPY(ListAppInstancesResponsePrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
