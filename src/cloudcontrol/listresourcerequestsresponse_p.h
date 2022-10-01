// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEREQUESTSRESPONSE_P_H
#define QTAWS_LISTRESOURCEREQUESTSRESPONSE_P_H

#include "cloudcontrolresponse_p.h"

namespace QtAws {
namespace CloudControl {

class ListResourceRequestsResponse;

class ListResourceRequestsResponsePrivate : public CloudControlResponsePrivate {

public:

    explicit ListResourceRequestsResponsePrivate(ListResourceRequestsResponse * const q);

    void parseListResourceRequestsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourceRequestsResponse)
    Q_DISABLE_COPY(ListResourceRequestsResponsePrivate)

};

} // namespace CloudControl
} // namespace QtAws

#endif
