// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOREDEFINITIONREQUEST_H
#define QTAWS_CREATECOREDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateCoreDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT CreateCoreDefinitionRequest : public GreengrassRequest {

public:
    CreateCoreDefinitionRequest(const CreateCoreDefinitionRequest &other);
    CreateCoreDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCoreDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
