// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKGROUPRESPONSE_P_H
#define QTAWS_CREATEWORKGROUPRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateWorkgroupResponse;

class CreateWorkgroupResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit CreateWorkgroupResponsePrivate(CreateWorkgroupResponse * const q);

    void parseCreateWorkgroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorkgroupResponse)
    Q_DISABLE_COPY(CreateWorkgroupResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
