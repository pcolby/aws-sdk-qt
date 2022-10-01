// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIPTIONDEFINITIONREQUEST_H
#define QTAWS_CREATESUBSCRIPTIONDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateSubscriptionDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateSubscriptionDefinitionRequest : public GreengrassRequest {

public:
    CreateSubscriptionDefinitionRequest(const CreateSubscriptionDefinitionRequest &other);
    CreateSubscriptionDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSubscriptionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
