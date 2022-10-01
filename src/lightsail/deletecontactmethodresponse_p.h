// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTMETHODRESPONSE_P_H
#define QTAWS_DELETECONTACTMETHODRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteContactMethodResponse;

class DeleteContactMethodResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteContactMethodResponsePrivate(DeleteContactMethodResponse * const q);

    void parseDeleteContactMethodResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteContactMethodResponse)
    Q_DISABLE_COPY(DeleteContactMethodResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
