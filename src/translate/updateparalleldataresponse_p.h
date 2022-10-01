// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARALLELDATARESPONSE_P_H
#define QTAWS_UPDATEPARALLELDATARESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class UpdateParallelDataResponse;

class UpdateParallelDataResponsePrivate : public TranslateResponsePrivate {

public:

    explicit UpdateParallelDataResponsePrivate(UpdateParallelDataResponse * const q);

    void parseUpdateParallelDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateParallelDataResponse)
    Q_DISABLE_COPY(UpdateParallelDataResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif
