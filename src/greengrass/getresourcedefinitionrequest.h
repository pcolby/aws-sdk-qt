// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEDEFINITIONREQUEST_H
#define QTAWS_GETRESOURCEDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetResourceDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetResourceDefinitionRequest : public GreengrassRequest {

public:
    GetResourceDefinitionRequest(const GetResourceDefinitionRequest &other);
    GetResourceDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
