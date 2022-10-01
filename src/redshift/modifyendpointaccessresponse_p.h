// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYENDPOINTACCESSRESPONSE_P_H
#define QTAWS_MODIFYENDPOINTACCESSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ModifyEndpointAccessResponse;

class ModifyEndpointAccessResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ModifyEndpointAccessResponsePrivate(ModifyEndpointAccessResponse * const q);

    void parseModifyEndpointAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyEndpointAccessResponse)
    Q_DISABLE_COPY(ModifyEndpointAccessResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
