// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFAQSRESPONSE_P_H
#define QTAWS_LISTFAQSRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class ListFaqsResponse;

class ListFaqsResponsePrivate : public KendraResponsePrivate {

public:

    explicit ListFaqsResponsePrivate(ListFaqsResponse * const q);

    void parseListFaqsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFaqsResponse)
    Q_DISABLE_COPY(ListFaqsResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
