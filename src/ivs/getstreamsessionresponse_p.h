// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMSESSIONRESPONSE_P_H
#define QTAWS_GETSTREAMSESSIONRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class GetStreamSessionResponse;

class GetStreamSessionResponsePrivate : public IvsResponsePrivate {

public:

    explicit GetStreamSessionResponsePrivate(GetStreamSessionResponse * const q);

    void parseGetStreamSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStreamSessionResponse)
    Q_DISABLE_COPY(GetStreamSessionResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
