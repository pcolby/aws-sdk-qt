// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSOCIATIONBATCHRESPONSE_P_H
#define QTAWS_CREATEASSOCIATIONBATCHRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class CreateAssociationBatchResponse;

class CreateAssociationBatchResponsePrivate : public SsmResponsePrivate {

public:

    explicit CreateAssociationBatchResponsePrivate(CreateAssociationBatchResponse * const q);

    void parseCreateAssociationBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAssociationBatchResponse)
    Q_DISABLE_COPY(CreateAssociationBatchResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
