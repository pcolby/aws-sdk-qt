// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTACCESSRESPONSE_P_H
#define QTAWS_CREATEENDPOINTACCESSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class CreateEndpointAccessResponse;

class CreateEndpointAccessResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit CreateEndpointAccessResponsePrivate(CreateEndpointAccessResponse * const q);

    void parseCreateEndpointAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEndpointAccessResponse)
    Q_DISABLE_COPY(CreateEndpointAccessResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
