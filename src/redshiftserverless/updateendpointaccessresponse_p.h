// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTACCESSRESPONSE_P_H
#define QTAWS_UPDATEENDPOINTACCESSRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateEndpointAccessResponse;

class UpdateEndpointAccessResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit UpdateEndpointAccessResponsePrivate(UpdateEndpointAccessResponse * const q);

    void parseUpdateEndpointAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEndpointAccessResponse)
    Q_DISABLE_COPY(UpdateEndpointAccessResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
