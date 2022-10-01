// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLERADIUSRESPONSE_P_H
#define QTAWS_ENABLERADIUSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class EnableRadiusResponse;

class EnableRadiusResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit EnableRadiusResponsePrivate(EnableRadiusResponse * const q);

    void parseEnableRadiusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableRadiusResponse)
    Q_DISABLE_COPY(EnableRadiusResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
