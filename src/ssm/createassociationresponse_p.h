// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSOCIATIONRESPONSE_P_H
#define QTAWS_CREATEASSOCIATIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class CreateAssociationResponse;

class CreateAssociationResponsePrivate : public SsmResponsePrivate {

public:

    explicit CreateAssociationResponsePrivate(CreateAssociationResponse * const q);

    void parseCreateAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAssociationResponse)
    Q_DISABLE_COPY(CreateAssociationResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
