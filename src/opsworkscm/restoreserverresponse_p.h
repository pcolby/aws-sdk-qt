// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESERVERRESPONSE_P_H
#define QTAWS_RESTORESERVERRESPONSE_P_H

#include "opsworkscmresponse_p.h"

namespace QtAws {
namespace OpsWorksCm {

class RestoreServerResponse;

class RestoreServerResponsePrivate : public OpsWorksCmResponsePrivate {

public:

    explicit RestoreServerResponsePrivate(RestoreServerResponse * const q);

    void parseRestoreServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreServerResponse)
    Q_DISABLE_COPY(RestoreServerResponsePrivate)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
