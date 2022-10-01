// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHSMSRESPONSE_P_H
#define QTAWS_LISTHSMSRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class ListHsmsResponse;

class ListHsmsResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit ListHsmsResponsePrivate(ListHsmsResponse * const q);

    void parseListHsmsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHsmsResponse)
    Q_DISABLE_COPY(ListHsmsResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
