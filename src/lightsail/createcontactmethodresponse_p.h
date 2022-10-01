// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTMETHODRESPONSE_P_H
#define QTAWS_CREATECONTACTMETHODRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateContactMethodResponse;

class CreateContactMethodResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateContactMethodResponsePrivate(CreateContactMethodResponse * const q);

    void parseCreateContactMethodResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateContactMethodResponse)
    Q_DISABLE_COPY(CreateContactMethodResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
