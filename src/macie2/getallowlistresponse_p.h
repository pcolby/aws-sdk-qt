// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETALLOWLISTRESPONSE_P_H
#define QTAWS_GETALLOWLISTRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetAllowListResponse;

class GetAllowListResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetAllowListResponsePrivate(GetAllowListResponse * const q);

    void parseGetAllowListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAllowListResponse)
    Q_DISABLE_COPY(GetAllowListResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
