// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHITRESPONSE_P_H
#define QTAWS_CREATEHITRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class CreateHITResponse;

class CreateHITResponsePrivate : public MTurkResponsePrivate {

public:

    explicit CreateHITResponsePrivate(CreateHITResponse * const q);

    void parseCreateHITResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHITResponse)
    Q_DISABLE_COPY(CreateHITResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
