// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSOCIATIONRESPONSE_P_H
#define QTAWS_UPDATEASSOCIATIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class UpdateAssociationResponse;

class UpdateAssociationResponsePrivate : public SsmResponsePrivate {

public:

    explicit UpdateAssociationResponsePrivate(UpdateAssociationResponse * const q);

    void parseUpdateAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAssociationResponse)
    Q_DISABLE_COPY(UpdateAssociationResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
