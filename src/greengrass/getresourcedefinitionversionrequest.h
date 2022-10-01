// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEDEFINITIONVERSIONREQUEST_H
#define QTAWS_GETRESOURCEDEFINITIONVERSIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetResourceDefinitionVersionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetResourceDefinitionVersionRequest : public GreengrassRequest {

public:
    GetResourceDefinitionVersionRequest(const GetResourceDefinitionVersionRequest &other);
    GetResourceDefinitionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
