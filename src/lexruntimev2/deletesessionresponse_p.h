// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESESSIONRESPONSE_P_H
#define QTAWS_DELETESESSIONRESPONSE_P_H

#include "lexruntimev2response_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

class DeleteSessionResponse;

class DeleteSessionResponsePrivate : public LexRuntimeV2ResponsePrivate {

public:

    explicit DeleteSessionResponsePrivate(DeleteSessionResponse * const q);

    void parseDeleteSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSessionResponse)
    Q_DISABLE_COPY(DeleteSessionResponsePrivate)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
