// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEUSERENDPOINTSRESPONSE_P_H
#define QTAWS_LISTAPPINSTANCEUSERENDPOINTSRESPONSE_P_H

#include "chimesdkidentityresponse_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ListAppInstanceUserEndpointsResponse;

class ListAppInstanceUserEndpointsResponsePrivate : public ChimeSdkIdentityResponsePrivate {

public:

    explicit ListAppInstanceUserEndpointsResponsePrivate(ListAppInstanceUserEndpointsResponse * const q);

    void parseListAppInstanceUserEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppInstanceUserEndpointsResponse)
    Q_DISABLE_COPY(ListAppInstanceUserEndpointsResponsePrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
