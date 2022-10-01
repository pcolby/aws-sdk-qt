// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRUSTSTORERESPONSE_P_H
#define QTAWS_CREATETRUSTSTORERESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateTrustStoreResponse;

class CreateTrustStoreResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit CreateTrustStoreResponsePrivate(CreateTrustStoreResponse * const q);

    void parseCreateTrustStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrustStoreResponse)
    Q_DISABLE_COPY(CreateTrustStoreResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
