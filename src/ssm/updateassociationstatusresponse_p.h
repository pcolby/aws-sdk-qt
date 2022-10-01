// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSOCIATIONSTATUSRESPONSE_P_H
#define QTAWS_UPDATEASSOCIATIONSTATUSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class UpdateAssociationStatusResponse;

class UpdateAssociationStatusResponsePrivate : public SsmResponsePrivate {

public:

    explicit UpdateAssociationStatusResponsePrivate(UpdateAssociationStatusResponse * const q);

    void parseUpdateAssociationStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAssociationStatusResponse)
    Q_DISABLE_COPY(UpdateAssociationStatusResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
