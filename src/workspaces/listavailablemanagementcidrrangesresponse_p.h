// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEMANAGEMENTCIDRRANGESRESPONSE_P_H
#define QTAWS_LISTAVAILABLEMANAGEMENTCIDRRANGESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class ListAvailableManagementCidrRangesResponse;

class ListAvailableManagementCidrRangesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit ListAvailableManagementCidrRangesResponsePrivate(ListAvailableManagementCidrRangesResponse * const q);

    void parseListAvailableManagementCidrRangesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAvailableManagementCidrRangesResponse)
    Q_DISABLE_COPY(ListAvailableManagementCidrRangesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
