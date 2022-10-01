// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMACIESESSIONRESPONSE_P_H
#define QTAWS_UPDATEMACIESESSIONRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class UpdateMacieSessionResponse;

class UpdateMacieSessionResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit UpdateMacieSessionResponsePrivate(UpdateMacieSessionResponse * const q);

    void parseUpdateMacieSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMacieSessionResponse)
    Q_DISABLE_COPY(UpdateMacieSessionResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
