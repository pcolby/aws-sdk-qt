// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARALLELDATARESPONSE_P_H
#define QTAWS_CREATEPARALLELDATARESPONSE_P_H

#include "translateresponse_p.h"

namespace QtAws {
namespace Translate {

class CreateParallelDataResponse;

class CreateParallelDataResponsePrivate : public TranslateResponsePrivate {

public:

    explicit CreateParallelDataResponsePrivate(CreateParallelDataResponse * const q);

    void parseCreateParallelDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateParallelDataResponse)
    Q_DISABLE_COPY(CreateParallelDataResponsePrivate)

};

} // namespace Translate
} // namespace QtAws

#endif
