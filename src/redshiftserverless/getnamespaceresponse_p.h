// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMESPACERESPONSE_P_H
#define QTAWS_GETNAMESPACERESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class GetNamespaceResponse;

class GetNamespaceResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit GetNamespaceResponsePrivate(GetNamespaceResponse * const q);

    void parseGetNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNamespaceResponse)
    Q_DISABLE_COPY(GetNamespaceResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
