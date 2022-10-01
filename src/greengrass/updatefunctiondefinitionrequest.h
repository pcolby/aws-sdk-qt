// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONDEFINITIONREQUEST_H
#define QTAWS_UPDATEFUNCTIONDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateFunctionDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT UpdateFunctionDefinitionRequest : public GreengrassRequest {

public:
    UpdateFunctionDefinitionRequest(const UpdateFunctionDefinitionRequest &other);
    UpdateFunctionDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFunctionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
