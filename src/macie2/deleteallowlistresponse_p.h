// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALLOWLISTRESPONSE_P_H
#define QTAWS_DELETEALLOWLISTRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class DeleteAllowListResponse;

class DeleteAllowListResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit DeleteAllowListResponsePrivate(DeleteAllowListResponse * const q);

    void parseDeleteAllowListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAllowListResponse)
    Q_DISABLE_COPY(DeleteAllowListResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
