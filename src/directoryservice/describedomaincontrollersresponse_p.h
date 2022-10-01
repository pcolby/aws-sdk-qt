// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCONTROLLERSRESPONSE_P_H
#define QTAWS_DESCRIBEDOMAINCONTROLLERSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DescribeDomainControllersResponse;

class DescribeDomainControllersResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DescribeDomainControllersResponsePrivate(DescribeDomainControllersResponse * const q);

    void parseDescribeDomainControllersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDomainControllersResponse)
    Q_DISABLE_COPY(DescribeDomainControllersResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
