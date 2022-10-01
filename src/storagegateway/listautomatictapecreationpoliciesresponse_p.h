// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUTOMATICTAPECREATIONPOLICIESRESPONSE_P_H
#define QTAWS_LISTAUTOMATICTAPECREATIONPOLICIESRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class ListAutomaticTapeCreationPoliciesResponse;

class ListAutomaticTapeCreationPoliciesResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit ListAutomaticTapeCreationPoliciesResponsePrivate(ListAutomaticTapeCreationPoliciesResponse * const q);

    void parseListAutomaticTapeCreationPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAutomaticTapeCreationPoliciesResponse)
    Q_DISABLE_COPY(ListAutomaticTapeCreationPoliciesResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
