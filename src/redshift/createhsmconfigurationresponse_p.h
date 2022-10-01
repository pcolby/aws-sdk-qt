// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEHSMCONFIGURATIONRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class CreateHsmConfigurationResponse;

class CreateHsmConfigurationResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit CreateHsmConfigurationResponsePrivate(CreateHsmConfigurationResponse * const q);

    void parseCreateHsmConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHsmConfigurationResponse)
    Q_DISABLE_COPY(CreateHsmConfigurationResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
