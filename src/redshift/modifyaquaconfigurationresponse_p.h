// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYAQUACONFIGURATIONRESPONSE_P_H
#define QTAWS_MODIFYAQUACONFIGURATIONRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ModifyAquaConfigurationResponse;

class ModifyAquaConfigurationResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ModifyAquaConfigurationResponsePrivate(ModifyAquaConfigurationResponse * const q);

    void parseModifyAquaConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyAquaConfigurationResponse)
    Q_DISABLE_COPY(ModifyAquaConfigurationResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
