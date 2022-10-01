// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDASSOCIATIONRESPONSE_P_H
#define QTAWS_ADDASSOCIATIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class AddAssociationResponse;

class AddAssociationResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit AddAssociationResponsePrivate(AddAssociationResponse * const q);

    void parseAddAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddAssociationResponse)
    Q_DISABLE_COPY(AddAssociationResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
