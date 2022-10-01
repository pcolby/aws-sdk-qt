// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERBYPRINCIPALIDRESPONSE_P_H
#define QTAWS_DELETEUSERBYPRINCIPALIDRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DeleteUserByPrincipalIdResponse;

class DeleteUserByPrincipalIdResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DeleteUserByPrincipalIdResponsePrivate(DeleteUserByPrincipalIdResponse * const q);

    void parseDeleteUserByPrincipalIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUserByPrincipalIdResponse)
    Q_DISABLE_COPY(DeleteUserByPrincipalIdResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
