// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLERADIUSRESPONSE_P_H
#define QTAWS_DISABLERADIUSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DisableRadiusResponse;

class DisableRadiusResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DisableRadiusResponsePrivate(DisableRadiusResponse * const q);

    void parseDisableRadiusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableRadiusResponse)
    Q_DISABLE_COPY(DisableRadiusResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
