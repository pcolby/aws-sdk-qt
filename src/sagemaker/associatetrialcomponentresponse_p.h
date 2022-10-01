// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRIALCOMPONENTRESPONSE_P_H
#define QTAWS_ASSOCIATETRIALCOMPONENTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class AssociateTrialComponentResponse;

class AssociateTrialComponentResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit AssociateTrialComponentResponsePrivate(AssociateTrialComponentResponse * const q);

    void parseAssociateTrialComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateTrialComponentResponse)
    Q_DISABLE_COPY(AssociateTrialComponentResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
