// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHAPGRESPONSE_P_H
#define QTAWS_CREATEHAPGRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class CreateHapgResponse;

class CreateHapgResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit CreateHapgResponsePrivate(CreateHapgResponse * const q);

    void parseCreateHapgResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHapgResponse)
    Q_DISABLE_COPY(CreateHapgResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
