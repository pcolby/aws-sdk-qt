// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARALLELDATARESPONSE_P_H
#define QTAWS_LISTPARALLELDATARESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class ListParallelDataResponse;

class ListParallelDataResponsePrivate : public TranslateResponsePrivate {

public:

    explicit ListParallelDataResponsePrivate(ListParallelDataResponse * const q);

    void parseListParallelDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListParallelDataResponse)
    Q_DISABLE_COPY(ListParallelDataResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif
