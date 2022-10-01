// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESSORESPONSE_P_H
#define QTAWS_ENABLESSORESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class EnableSsoResponse;

class EnableSsoResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit EnableSsoResponsePrivate(EnableSsoResponse * const q);

    void parseEnableSsoResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableSsoResponse)
    Q_DISABLE_COPY(EnableSsoResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
