// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONDEFINITIONVERSIONREQUEST_H
#define QTAWS_GETSUBSCRIPTIONDEFINITIONVERSIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetSubscriptionDefinitionVersionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetSubscriptionDefinitionVersionRequest : public GreengrassRequest {

public:
    GetSubscriptionDefinitionVersionRequest(const GetSubscriptionDefinitionVersionRequest &other);
    GetSubscriptionDefinitionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSubscriptionDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
