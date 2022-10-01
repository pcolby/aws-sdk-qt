// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIPTIONDEFINITIONREQUEST_H
#define QTAWS_DELETESUBSCRIPTIONDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class DeleteSubscriptionDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT DeleteSubscriptionDefinitionRequest : public GreengrassRequest {

public:
    DeleteSubscriptionDefinitionRequest(const DeleteSubscriptionDefinitionRequest &other);
    DeleteSubscriptionDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSubscriptionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
