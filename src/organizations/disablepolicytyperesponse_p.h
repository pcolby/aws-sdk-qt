// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEPOLICYTYPERESPONSE_P_H
#define QTAWS_DISABLEPOLICYTYPERESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class DisablePolicyTypeResponse;

class DisablePolicyTypeResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit DisablePolicyTypeResponsePrivate(DisablePolicyTypeResponse * const q);

    void parseDisablePolicyTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisablePolicyTypeResponse)
    Q_DISABLE_COPY(DisablePolicyTypeResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
