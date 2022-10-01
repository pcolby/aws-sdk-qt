// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONDEFINITIONREQUEST_H
#define QTAWS_GETSUBSCRIPTIONDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetSubscriptionDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetSubscriptionDefinitionRequest : public GreengrassRequest {

public:
    GetSubscriptionDefinitionRequest(const GetSubscriptionDefinitionRequest &other);
    GetSubscriptionDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSubscriptionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
