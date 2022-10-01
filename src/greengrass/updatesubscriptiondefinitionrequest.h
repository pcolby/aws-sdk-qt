// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIPTIONDEFINITIONREQUEST_H
#define QTAWS_UPDATESUBSCRIPTIONDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateSubscriptionDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT UpdateSubscriptionDefinitionRequest : public GreengrassRequest {

public:
    UpdateSubscriptionDefinitionRequest(const UpdateSubscriptionDefinitionRequest &other);
    UpdateSubscriptionDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSubscriptionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
