// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMRESPONSE_P_H
#define QTAWS_CREATEHSMRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class CreateHsmResponse;

class CreateHsmResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit CreateHsmResponsePrivate(CreateHsmResponse * const q);

    void parseCreateHsmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHsmResponse)
    Q_DISABLE_COPY(CreateHsmResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
