// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENAMESPACERESPONSE_P_H
#define QTAWS_UPDATENAMESPACERESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateNamespaceResponse;

class UpdateNamespaceResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit UpdateNamespaceResponsePrivate(UpdateNamespaceResponse * const q);

    void parseUpdateNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNamespaceResponse)
    Q_DISABLE_COPY(UpdateNamespaceResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
