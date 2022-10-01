// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHITWITHHITTYPERESPONSE_P_H
#define QTAWS_CREATEHITWITHHITTYPERESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class CreateHITWithHITTypeResponse;

class CreateHITWithHITTypeResponsePrivate : public MTurkResponsePrivate {

public:

    explicit CreateHITWithHITTypeResponsePrivate(CreateHITWithHITTypeResponse * const q);

    void parseCreateHITWithHITTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHITWithHITTypeResponse)
    Q_DISABLE_COPY(CreateHITWithHITTypeResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
