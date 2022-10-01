// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYACCOUNTRESPONSE_P_H
#define QTAWS_MODIFYACCOUNTRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyAccountResponse;

class ModifyAccountResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit ModifyAccountResponsePrivate(ModifyAccountResponse * const q);

    void parseModifyAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyAccountResponse)
    Q_DISABLE_COPY(ModifyAccountResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
