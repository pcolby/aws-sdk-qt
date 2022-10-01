// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILTERRESPONSE_P_H
#define QTAWS_DELETEFILTERRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class DeleteFilterResponse;

class DeleteFilterResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit DeleteFilterResponsePrivate(DeleteFilterResponse * const q);

    void parseDeleteFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFilterResponse)
    Q_DISABLE_COPY(DeleteFilterResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
