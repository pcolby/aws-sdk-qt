// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTORGANIZATIONCONFORMANCEPACKRESPONSE_P_H
#define QTAWS_PUTORGANIZATIONCONFORMANCEPACKRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class PutOrganizationConformancePackResponse;

class PutOrganizationConformancePackResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit PutOrganizationConformancePackResponsePrivate(PutOrganizationConformancePackResponse * const q);

    void parsePutOrganizationConformancePackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutOrganizationConformancePackResponse)
    Q_DISABLE_COPY(PutOrganizationConformancePackResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
