// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENUMBEROFDOMAINCONTROLLERSRESPONSE_P_H
#define QTAWS_UPDATENUMBEROFDOMAINCONTROLLERSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class UpdateNumberOfDomainControllersResponse;

class UpdateNumberOfDomainControllersResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit UpdateNumberOfDomainControllersResponsePrivate(UpdateNumberOfDomainControllersResponse * const q);

    void parseUpdateNumberOfDomainControllersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNumberOfDomainControllersResponse)
    Q_DISABLE_COPY(UpdateNumberOfDomainControllersResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
