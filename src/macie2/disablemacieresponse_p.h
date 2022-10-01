// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEMACIERESPONSE_P_H
#define QTAWS_DISABLEMACIERESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class DisableMacieResponse;

class DisableMacieResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit DisableMacieResponsePrivate(DisableMacieResponse * const q);

    void parseDisableMacieResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableMacieResponse)
    Q_DISABLE_COPY(DisableMacieResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
