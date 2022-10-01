// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIVATIONREQUEST_H
#define QTAWS_CREATEACTIVATIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class CreateActivationRequestPrivate;

class QTAWSSSM_EXPORT CreateActivationRequest : public SsmRequest {

public:
    CreateActivationRequest(const CreateActivationRequest &other);
    CreateActivationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateActivationRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
