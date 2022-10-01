// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONDEFINITIONVERSIONREQUEST_H
#define QTAWS_GETFUNCTIONDEFINITIONVERSIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetFunctionDefinitionVersionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetFunctionDefinitionVersionRequest : public GreengrassRequest {

public:
    GetFunctionDefinitionVersionRequest(const GetFunctionDefinitionVersionRequest &other);
    GetFunctionDefinitionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionDefinitionVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
