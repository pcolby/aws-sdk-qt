// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SELECTRESOURCECONFIGRESPONSE_P_H
#define QTAWS_SELECTRESOURCECONFIGRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class SelectResourceConfigResponse;

class SelectResourceConfigResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit SelectResourceConfigResponsePrivate(SelectResourceConfigResponse * const q);

    void parseSelectResourceConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SelectResourceConfigResponse)
    Q_DISABLE_COPY(SelectResourceConfigResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
