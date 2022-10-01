// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKGROUPRESPONSE_P_H
#define QTAWS_GETWORKGROUPRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class GetWorkgroupResponse;

class GetWorkgroupResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit GetWorkgroupResponsePrivate(GetWorkgroupResponse * const q);

    void parseGetWorkgroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWorkgroupResponse)
    Q_DISABLE_COPY(GetWorkgroupResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
