// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLELOGGINGRESPONSE_P_H
#define QTAWS_DISABLELOGGINGRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DisableLoggingResponse;

class DisableLoggingResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DisableLoggingResponsePrivate(DisableLoggingResponse * const q);

    void parseDisableLoggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableLoggingResponse)
    Q_DISABLE_COPY(DisableLoggingResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
