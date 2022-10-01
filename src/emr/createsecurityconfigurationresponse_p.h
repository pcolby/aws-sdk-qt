// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECURITYCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATESECURITYCONFIGURATIONRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class CreateSecurityConfigurationResponse;

class CreateSecurityConfigurationResponsePrivate : public EmrResponsePrivate {

public:

    explicit CreateSecurityConfigurationResponsePrivate(CreateSecurityConfigurationResponse * const q);

    void parseCreateSecurityConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSecurityConfigurationResponse)
    Q_DISABLE_COPY(CreateSecurityConfigurationResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
