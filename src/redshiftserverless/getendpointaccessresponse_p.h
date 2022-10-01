// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENDPOINTACCESSRESPONSE_P_H
#define QTAWS_GETENDPOINTACCESSRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class GetEndpointAccessResponse;

class GetEndpointAccessResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit GetEndpointAccessResponsePrivate(GetEndpointAccessResponse * const q);

    void parseGetEndpointAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEndpointAccessResponse)
    Q_DISABLE_COPY(GetEndpointAccessResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
