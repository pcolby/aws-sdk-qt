// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSECURITYTOKENSERVICEPREFERENCESRESPONSE_P_H
#define QTAWS_SETSECURITYTOKENSERVICEPREFERENCESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class SetSecurityTokenServicePreferencesResponse;

class SetSecurityTokenServicePreferencesResponsePrivate : public IamResponsePrivate {

public:

    explicit SetSecurityTokenServicePreferencesResponsePrivate(SetSecurityTokenServicePreferencesResponse * const q);

    void parseSetSecurityTokenServicePreferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetSecurityTokenServicePreferencesResponse)
    Q_DISABLE_COPY(SetSecurityTokenServicePreferencesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
