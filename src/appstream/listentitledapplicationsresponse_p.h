// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITLEDAPPLICATIONSRESPONSE_P_H
#define QTAWS_LISTENTITLEDAPPLICATIONSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class ListEntitledApplicationsResponse;

class ListEntitledApplicationsResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit ListEntitledApplicationsResponsePrivate(ListEntitledApplicationsResponse * const q);

    void parseListEntitledApplicationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEntitledApplicationsResponse)
    Q_DISABLE_COPY(ListEntitledApplicationsResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
