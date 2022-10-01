// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFORMANCEPACKRESPONSE_P_H
#define QTAWS_DELETECONFORMANCEPACKRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeleteConformancePackResponse;

class DeleteConformancePackResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeleteConformancePackResponsePrivate(DeleteConformancePackResponse * const q);

    void parseDeleteConformancePackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConformancePackResponse)
    Q_DISABLE_COPY(DeleteConformancePackResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
