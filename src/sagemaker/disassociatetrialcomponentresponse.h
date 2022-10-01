// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRIALCOMPONENTRESPONSE_H
#define QTAWS_DISASSOCIATETRIALCOMPONENTRESPONSE_H

#include "sagemakerresponse.h"
#include "disassociatetrialcomponentrequest.h"

namespace QtAws {
namespace SageMaker {

class DisassociateTrialComponentResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DisassociateTrialComponentResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DisassociateTrialComponentResponse(const DisassociateTrialComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateTrialComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTrialComponentResponse)
    Q_DISABLE_COPY(DisassociateTrialComponentResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
