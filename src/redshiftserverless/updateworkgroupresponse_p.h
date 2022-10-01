// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKGROUPRESPONSE_P_H
#define QTAWS_UPDATEWORKGROUPRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateWorkgroupResponse;

class UpdateWorkgroupResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit UpdateWorkgroupResponsePrivate(UpdateWorkgroupResponse * const q);

    void parseUpdateWorkgroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWorkgroupResponse)
    Q_DISABLE_COPY(UpdateWorkgroupResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
