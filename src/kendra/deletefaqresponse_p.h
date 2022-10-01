// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFAQRESPONSE_P_H
#define QTAWS_DELETEFAQRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DeleteFaqResponse;

class DeleteFaqResponsePrivate : public KendraResponsePrivate {

public:

    explicit DeleteFaqResponsePrivate(DeleteFaqResponse * const q);

    void parseDeleteFaqResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFaqResponse)
    Q_DISABLE_COPY(DeleteFaqResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
