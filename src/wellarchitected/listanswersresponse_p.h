// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANSWERSRESPONSE_P_H
#define QTAWS_LISTANSWERSRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class ListAnswersResponse;

class ListAnswersResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit ListAnswersResponsePrivate(ListAnswersResponse * const q);

    void parseListAnswersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAnswersResponse)
    Q_DISABLE_COPY(ListAnswersResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
