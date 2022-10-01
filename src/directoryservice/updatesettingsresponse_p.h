// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESETTINGSRESPONSE_P_H
#define QTAWS_UPDATESETTINGSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class UpdateSettingsResponse;

class UpdateSettingsResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit UpdateSettingsResponsePrivate(UpdateSettingsResponse * const q);

    void parseUpdateSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSettingsResponse)
    Q_DISABLE_COPY(UpdateSettingsResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
