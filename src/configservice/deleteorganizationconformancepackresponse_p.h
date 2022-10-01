// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONCONFORMANCEPACKRESPONSE_P_H
#define QTAWS_DELETEORGANIZATIONCONFORMANCEPACKRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DeleteOrganizationConformancePackResponse;

class DeleteOrganizationConformancePackResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DeleteOrganizationConformancePackResponsePrivate(DeleteOrganizationConformancePackResponse * const q);

    void parseDeleteOrganizationConformancePackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOrganizationConformancePackResponse)
    Q_DISABLE_COPY(DeleteOrganizationConformancePackResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
