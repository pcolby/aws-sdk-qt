// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONDEFINITIONREQUEST_H
#define QTAWS_GETFUNCTIONDEFINITIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetFunctionDefinitionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetFunctionDefinitionRequest : public GreengrassRequest {

public:
    GetFunctionDefinitionRequest(const GetFunctionDefinitionRequest &other);
    GetFunctionDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionDefinitionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
