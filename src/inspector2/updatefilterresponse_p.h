// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFILTERRESPONSE_P_H
#define QTAWS_UPDATEFILTERRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class UpdateFilterResponse;

class UpdateFilterResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit UpdateFilterResponsePrivate(UpdateFilterResponse * const q);

    void parseUpdateFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFilterResponse)
    Q_DISABLE_COPY(UpdateFilterResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
