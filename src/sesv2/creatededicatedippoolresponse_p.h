// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEDICATEDIPPOOLRESPONSE_P_H
#define QTAWS_CREATEDEDICATEDIPPOOLRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class CreateDedicatedIpPoolResponse;

class CreateDedicatedIpPoolResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit CreateDedicatedIpPoolResponsePrivate(CreateDedicatedIpPoolResponse * const q);

    void parseCreateDedicatedIpPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDedicatedIpPoolResponse)
    Q_DISABLE_COPY(CreateDedicatedIpPoolResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
