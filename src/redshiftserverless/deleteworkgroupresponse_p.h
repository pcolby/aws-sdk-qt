// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKGROUPRESPONSE_P_H
#define QTAWS_DELETEWORKGROUPRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class DeleteWorkgroupResponse;

class DeleteWorkgroupResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit DeleteWorkgroupResponsePrivate(DeleteWorkgroupResponse * const q);

    void parseDeleteWorkgroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWorkgroupResponse)
    Q_DISABLE_COPY(DeleteWorkgroupResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
