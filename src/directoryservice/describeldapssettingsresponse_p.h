// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELDAPSSETTINGSRESPONSE_P_H
#define QTAWS_DESCRIBELDAPSSETTINGSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DescribeLDAPSSettingsResponse;

class DescribeLDAPSSettingsResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DescribeLDAPSSettingsResponsePrivate(DescribeLDAPSSettingsResponse * const q);

    void parseDescribeLDAPSSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLDAPSSettingsResponse)
    Q_DISABLE_COPY(DescribeLDAPSSettingsResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
