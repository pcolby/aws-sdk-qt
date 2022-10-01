// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINNAMERESPONSE_P_H
#define QTAWS_DELETEDOMAINNAMERESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class DeleteDomainNameResponse;

class DeleteDomainNameResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit DeleteDomainNameResponsePrivate(DeleteDomainNameResponse * const q);

    void parseDeleteDomainNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDomainNameResponse)
    Q_DISABLE_COPY(DeleteDomainNameResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
