// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENAMESPACERESPONSE_P_H
#define QTAWS_CREATENAMESPACERESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateNamespaceResponse;

class CreateNamespaceResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit CreateNamespaceResponsePrivate(CreateNamespaceResponse * const q);

    void parseCreateNamespaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNamespaceResponse)
    Q_DISABLE_COPY(CreateNamespaceResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
