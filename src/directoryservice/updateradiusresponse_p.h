// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERADIUSRESPONSE_P_H
#define QTAWS_UPDATERADIUSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class UpdateRadiusResponse;

class UpdateRadiusResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit UpdateRadiusResponsePrivate(UpdateRadiusResponse * const q);

    void parseUpdateRadiusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRadiusResponse)
    Q_DISABLE_COPY(UpdateRadiusResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
