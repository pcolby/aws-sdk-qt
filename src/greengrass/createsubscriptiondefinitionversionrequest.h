// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIPTIONDEFINITIONVERSIONREQUEST_H
#define QTAWS_CREATESUBSCRIPTIONDEFINITIONVERSIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateSubscriptionDefinitionVersionRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateSubscriptionDefinitionVersionRequest : public GreengrassRequest {

public:
    CreateSubscriptionDefinitionVersionRequest(const CreateSubscriptionDefinitionVersionRequest &other);
    CreateSubscriptionDefinitionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSubscriptionDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
