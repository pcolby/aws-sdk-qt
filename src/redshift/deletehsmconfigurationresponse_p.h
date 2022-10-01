// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHSMCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEHSMCONFIGURATIONRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeleteHsmConfigurationResponse;

class DeleteHsmConfigurationResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeleteHsmConfigurationResponsePrivate(DeleteHsmConfigurationResponse * const q);

    void parseDeleteHsmConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteHsmConfigurationResponse)
    Q_DISABLE_COPY(DeleteHsmConfigurationResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
