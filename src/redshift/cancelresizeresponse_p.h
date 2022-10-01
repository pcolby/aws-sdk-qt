// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRESIZERESPONSE_P_H
#define QTAWS_CANCELRESIZERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class CancelResizeResponse;

class CancelResizeResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit CancelResizeResponsePrivate(CancelResizeResponse * const q);

    void parseCancelResizeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelResizeResponse)
    Q_DISABLE_COPY(CancelResizeResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
