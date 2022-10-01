// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELUNACLIENTRESPONSE_P_H
#define QTAWS_DESCRIBELUNACLIENTRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class DescribeLunaClientResponse;

class DescribeLunaClientResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit DescribeLunaClientResponsePrivate(DescribeLunaClientResponse * const q);

    void parseDescribeLunaClientResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLunaClientResponse)
    Q_DISABLE_COPY(DescribeLunaClientResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
