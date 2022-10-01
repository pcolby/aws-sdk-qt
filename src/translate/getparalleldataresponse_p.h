// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARALLELDATARESPONSE_P_H
#define QTAWS_GETPARALLELDATARESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class GetParallelDataResponse;

class GetParallelDataResponsePrivate : public TranslateResponsePrivate {

public:

    explicit GetParallelDataResponsePrivate(GetParallelDataResponse * const q);

    void parseGetParallelDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetParallelDataResponse)
    Q_DISABLE_COPY(GetParallelDataResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif
