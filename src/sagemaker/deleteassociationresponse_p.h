// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSOCIATIONRESPONSE_P_H
#define QTAWS_DELETEASSOCIATIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteAssociationResponse;

class DeleteAssociationResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteAssociationResponsePrivate(DeleteAssociationResponse * const q);

    void parseDeleteAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAssociationResponse)
    Q_DISABLE_COPY(DeleteAssociationResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
