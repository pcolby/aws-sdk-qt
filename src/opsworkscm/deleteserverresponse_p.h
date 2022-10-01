// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVERRESPONSE_P_H
#define QTAWS_DELETESERVERRESPONSE_P_H

#include "opsworkscmresponse_p.h"

namespace QtAws {
namespace OpsWorksCm {

class DeleteServerResponse;

class DeleteServerResponsePrivate : public OpsWorksCmResponsePrivate {

public:

    explicit DeleteServerResponsePrivate(DeleteServerResponse * const q);

    void parseDeleteServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteServerResponse)
    Q_DISABLE_COPY(DeleteServerResponsePrivate)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
