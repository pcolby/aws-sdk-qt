// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILTERRESPONSE_P_H
#define QTAWS_CREATEFILTERRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class CreateFilterResponse;

class CreateFilterResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit CreateFilterResponsePrivate(CreateFilterResponse * const q);

    void parseCreateFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFilterResponse)
    Q_DISABLE_COPY(CreateFilterResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
