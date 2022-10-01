// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOREDEFINITIONVERSIONREQUEST_H
#define QTAWS_GETCOREDEFINITIONVERSIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetCoreDefinitionVersionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetCoreDefinitionVersionRequest : public GreengrassRequest {

public:
    GetCoreDefinitionVersionRequest(const GetCoreDefinitionVersionRequest &other);
    GetCoreDefinitionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoreDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
