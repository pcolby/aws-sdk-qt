// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPIDRESPONSE_P_H
#define QTAWS_GETGROUPIDRESPONSE_P_H

#include "identitystoreresponse_p.h"

namespace QtAws {
namespace IdentityStore {

class GetGroupIdResponse;

class GetGroupIdResponsePrivate : public IdentityStoreResponsePrivate {

public:

    explicit GetGroupIdResponsePrivate(GetGroupIdResponse * const q);

    void parseGetGroupIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGroupIdResponse)
    Q_DISABLE_COPY(GetGroupIdResponsePrivate)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
