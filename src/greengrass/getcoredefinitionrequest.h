// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOREDEFINITIONREQUEST_H
#define QTAWS_GETCOREDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetCoreDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetCoreDefinitionRequest : public GreengrassRequest {

public:
    GetCoreDefinitionRequest(const GetCoreDefinitionRequest &other);
    GetCoreDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoreDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
