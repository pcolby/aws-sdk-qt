// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLELDAPSRESPONSE_P_H
#define QTAWS_DISABLELDAPSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DisableLDAPSResponse;

class DisableLDAPSResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DisableLDAPSResponsePrivate(DisableLDAPSResponse * const q);

    void parseDisableLDAPSResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableLDAPSResponse)
    Q_DISABLE_COPY(DisableLDAPSResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
