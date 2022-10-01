// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERRESPONSE_P_H
#define QTAWS_UPDATEUSERRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class UpdateUserResponse;

class UpdateUserResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit UpdateUserResponsePrivate(UpdateUserResponse * const q);

    void parseUpdateUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserResponse)
    Q_DISABLE_COPY(UpdateUserResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
