// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYPOINTRESPONSE_P_H
#define QTAWS_GETRECOVERYPOINTRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class GetRecoveryPointResponse;

class GetRecoveryPointResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit GetRecoveryPointResponsePrivate(GetRecoveryPointResponse * const q);

    void parseGetRecoveryPointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRecoveryPointResponse)
    Q_DISABLE_COPY(GetRecoveryPointResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
