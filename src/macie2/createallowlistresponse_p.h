// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALLOWLISTRESPONSE_P_H
#define QTAWS_CREATEALLOWLISTRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class CreateAllowListResponse;

class CreateAllowListResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit CreateAllowListResponsePrivate(CreateAllowListResponse * const q);

    void parseCreateAllowListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAllowListResponse)
    Q_DISABLE_COPY(CreateAllowListResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
