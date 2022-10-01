// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHAPGSRESPONSE_P_H
#define QTAWS_LISTHAPGSRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class ListHapgsResponse;

class ListHapgsResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit ListHapgsResponsePrivate(ListHapgsResponse * const q);

    void parseListHapgsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHapgsResponse)
    Q_DISABLE_COPY(ListHapgsResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
