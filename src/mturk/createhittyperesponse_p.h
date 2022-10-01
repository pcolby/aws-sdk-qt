// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHITTYPERESPONSE_P_H
#define QTAWS_CREATEHITTYPERESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class CreateHITTypeResponse;

class CreateHITTypeResponsePrivate : public MTurkResponsePrivate {

public:

    explicit CreateHITTypeResponsePrivate(CreateHITTypeResponse * const q);

    void parseCreateHITTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHITTypeResponse)
    Q_DISABLE_COPY(CreateHITTypeResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
