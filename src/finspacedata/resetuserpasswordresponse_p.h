// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETUSERPASSWORDRESPONSE_P_H
#define QTAWS_RESETUSERPASSWORDRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class ResetUserPasswordResponse;

class ResetUserPasswordResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit ResetUserPasswordResponsePrivate(ResetUserPasswordResponse * const q);

    void parseResetUserPasswordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetUserPasswordResponse)
    Q_DISABLE_COPY(ResetUserPasswordResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
