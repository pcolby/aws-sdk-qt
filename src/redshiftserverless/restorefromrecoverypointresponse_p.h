// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREFROMRECOVERYPOINTRESPONSE_P_H
#define QTAWS_RESTOREFROMRECOVERYPOINTRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class RestoreFromRecoveryPointResponse;

class RestoreFromRecoveryPointResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit RestoreFromRecoveryPointResponsePrivate(RestoreFromRecoveryPointResponse * const q);

    void parseRestoreFromRecoveryPointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreFromRecoveryPointResponse)
    Q_DISABLE_COPY(RestoreFromRecoveryPointResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
