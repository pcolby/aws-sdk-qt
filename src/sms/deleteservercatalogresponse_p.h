// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVERCATALOGRESPONSE_P_H
#define QTAWS_DELETESERVERCATALOGRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class DeleteServerCatalogResponse;

class DeleteServerCatalogResponsePrivate : public SmsResponsePrivate {

public:

    explicit DeleteServerCatalogResponsePrivate(DeleteServerCatalogResponse * const q);

    void parseDeleteServerCatalogResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteServerCatalogResponse)
    Q_DISABLE_COPY(DeleteServerCatalogResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
