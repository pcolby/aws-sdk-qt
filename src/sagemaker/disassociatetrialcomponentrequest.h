// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRIALCOMPONENTREQUEST_H
#define QTAWS_DISASSOCIATETRIALCOMPONENTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DisassociateTrialComponentRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DisassociateTrialComponentRequest : public SageMakerRequest {

public:
    DisassociateTrialComponentRequest(const DisassociateTrialComponentRequest &other);
    DisassociateTrialComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTrialComponentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
