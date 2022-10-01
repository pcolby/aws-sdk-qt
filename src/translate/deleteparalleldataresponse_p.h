// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARALLELDATARESPONSE_P_H
#define QTAWS_DELETEPARALLELDATARESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class DeleteParallelDataResponse;

class DeleteParallelDataResponsePrivate : public TranslateResponsePrivate {

public:

    explicit DeleteParallelDataResponsePrivate(DeleteParallelDataResponse * const q);

    void parseDeleteParallelDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteParallelDataResponse)
    Q_DISABLE_COPY(DeleteParallelDataResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif
