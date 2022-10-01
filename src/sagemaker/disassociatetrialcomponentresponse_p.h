// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRIALCOMPONENTRESPONSE_P_H
#define QTAWS_DISASSOCIATETRIALCOMPONENTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DisassociateTrialComponentResponse;

class DisassociateTrialComponentResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DisassociateTrialComponentResponsePrivate(DisassociateTrialComponentResponse * const q);

    void parseDisassociateTrialComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateTrialComponentResponse)
    Q_DISABLE_COPY(DisassociateTrialComponentResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
