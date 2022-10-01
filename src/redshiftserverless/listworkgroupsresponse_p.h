// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKGROUPSRESPONSE_P_H
#define QTAWS_LISTWORKGROUPSRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class ListWorkgroupsResponse;

class ListWorkgroupsResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit ListWorkgroupsResponsePrivate(ListWorkgroupsResponse * const q);

    void parseListWorkgroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorkgroupsResponse)
    Q_DISABLE_COPY(ListWorkgroupsResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
