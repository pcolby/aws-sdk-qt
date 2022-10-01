// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPIRESPONSE_P_H
#define QTAWS_DISASSOCIATEAPIRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class DisassociateApiResponse;

class DisassociateApiResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit DisassociateApiResponsePrivate(DisassociateApiResponse * const q);

    void parseDisassociateApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateApiResponse)
    Q_DISABLE_COPY(DisassociateApiResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
