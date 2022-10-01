// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLELDAPSRESPONSE_P_H
#define QTAWS_ENABLELDAPSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class EnableLDAPSResponse;

class EnableLDAPSResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit EnableLDAPSResponsePrivate(EnableLDAPSResponse * const q);

    void parseEnableLDAPSResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableLDAPSResponse)
    Q_DISABLE_COPY(EnableLDAPSResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
