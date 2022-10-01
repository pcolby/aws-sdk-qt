// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELUNACLIENTRESPONSE_P_H
#define QTAWS_CREATELUNACLIENTRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class CreateLunaClientResponse;

class CreateLunaClientResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit CreateLunaClientResponsePrivate(CreateLunaClientResponse * const q);

    void parseCreateLunaClientResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLunaClientResponse)
    Q_DISABLE_COPY(CreateLunaClientResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
