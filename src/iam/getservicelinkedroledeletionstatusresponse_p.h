// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSE_P_H
#define QTAWS_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetServiceLinkedRoleDeletionStatusResponse;

class GetServiceLinkedRoleDeletionStatusResponsePrivate : public IamResponsePrivate {

public:

    explicit GetServiceLinkedRoleDeletionStatusResponsePrivate(GetServiceLinkedRoleDeletionStatusResponse * const q);

    void parseGetServiceLinkedRoleDeletionStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceLinkedRoleDeletionStatusResponse)
    Q_DISABLE_COPY(GetServiceLinkedRoleDeletionStatusResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
