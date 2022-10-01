// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETESECURITYCONFIGURATIONRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class DeleteSecurityConfigurationResponse;

class DeleteSecurityConfigurationResponsePrivate : public EmrResponsePrivate {

public:

    explicit DeleteSecurityConfigurationResponsePrivate(DeleteSecurityConfigurationResponse * const q);

    void parseDeleteSecurityConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSecurityConfigurationResponse)
    Q_DISABLE_COPY(DeleteSecurityConfigurationResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
