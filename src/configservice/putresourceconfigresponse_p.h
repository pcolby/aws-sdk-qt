// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCECONFIGRESPONSE_P_H
#define QTAWS_PUTRESOURCECONFIGRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutResourceConfigResponse;

class PutResourceConfigResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutResourceConfigResponsePrivate(PutResourceConfigResponse * const q);

    void parsePutResourceConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutResourceConfigResponse)
    Q_DISABLE_COPY(PutResourceConfigResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
