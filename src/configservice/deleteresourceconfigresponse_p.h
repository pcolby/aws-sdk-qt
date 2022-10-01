// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCECONFIGRESPONSE_P_H
#define QTAWS_DELETERESOURCECONFIGRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeleteResourceConfigResponse;

class DeleteResourceConfigResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeleteResourceConfigResponsePrivate(DeleteResourceConfigResponse * const q);

    void parseDeleteResourceConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResourceConfigResponse)
    Q_DISABLE_COPY(DeleteResourceConfigResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
