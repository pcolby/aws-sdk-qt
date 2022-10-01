// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEUSERRESPONSE_P_H
#define QTAWS_DISABLEUSERRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class DisableUserResponse;

class DisableUserResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit DisableUserResponsePrivate(DisableUserResponse * const q);

    void parseDisableUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableUserResponse)
    Q_DISABLE_COPY(DisableUserResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
