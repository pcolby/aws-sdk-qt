// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONDEFINITIONSREQUEST_H
#define QTAWS_LISTSUBSCRIPTIONDEFINITIONSREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class ListSubscriptionDefinitionsRequestPrivate;

class QTAWSGREENGRASS_EXPORT ListSubscriptionDefinitionsRequest : public GreengrassRequest {

public:
    ListSubscriptionDefinitionsRequest(const ListSubscriptionDefinitionsRequest &other);
    ListSubscriptionDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubscriptionDefinitionsRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
