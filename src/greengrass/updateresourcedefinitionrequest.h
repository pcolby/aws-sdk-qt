// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEDEFINITIONREQUEST_H
#define QTAWS_UPDATERESOURCEDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateResourceDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT UpdateResourceDefinitionRequest : public GreengrassRequest {

public:
    UpdateResourceDefinitionRequest(const UpdateResourceDefinitionRequest &other);
    UpdateResourceDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
