// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYDKIMENABLEDRESPONSE_P_H
#define QTAWS_SETIDENTITYDKIMENABLEDRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class SetIdentityDkimEnabledResponse;

class SetIdentityDkimEnabledResponsePrivate : public SesResponsePrivate {

public:

    explicit SetIdentityDkimEnabledResponsePrivate(SetIdentityDkimEnabledResponse * const q);

    void parseSetIdentityDkimEnabledResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetIdentityDkimEnabledResponse)
    Q_DISABLE_COPY(SetIdentityDkimEnabledResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
