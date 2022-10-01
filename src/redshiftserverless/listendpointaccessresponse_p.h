// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTACCESSRESPONSE_P_H
#define QTAWS_LISTENDPOINTACCESSRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class ListEndpointAccessResponse;

class ListEndpointAccessResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit ListEndpointAccessResponsePrivate(ListEndpointAccessResponse * const q);

    void parseListEndpointAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEndpointAccessResponse)
    Q_DISABLE_COPY(ListEndpointAccessResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
