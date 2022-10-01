// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRUSTSTORERESPONSE_P_H
#define QTAWS_DISASSOCIATETRUSTSTORERESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateTrustStoreResponse;

class DisassociateTrustStoreResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit DisassociateTrustStoreResponsePrivate(DisassociateTrustStoreResponse * const q);

    void parseDisassociateTrustStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateTrustStoreResponse)
    Q_DISABLE_COPY(DisassociateTrustStoreResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
