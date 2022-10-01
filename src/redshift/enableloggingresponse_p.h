// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLELOGGINGRESPONSE_P_H
#define QTAWS_ENABLELOGGINGRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class EnableLoggingResponse;

class EnableLoggingResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit EnableLoggingResponsePrivate(EnableLoggingResponse * const q);

    void parseEnableLoggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableLoggingResponse)
    Q_DISABLE_COPY(EnableLoggingResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
