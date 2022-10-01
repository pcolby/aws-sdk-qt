// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMRESPONSE_P_H
#define QTAWS_CREATEHSMRESPONSE_P_H

#include "cloudhsmv2response_p.h"

namespace QtAws {
namespace CloudHsmV2 {

class CreateHsmResponse;

class CreateHsmResponsePrivate : public CloudHsmV2ResponsePrivate {

public:

    explicit CreateHsmResponsePrivate(CreateHsmResponse * const q);

    void parseCreateHsmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHsmResponse)
    Q_DISABLE_COPY(CreateHsmResponsePrivate)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
