// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERDEFINEDFUNCTIONREQUEST_H
#define QTAWS_CREATEUSERDEFINEDFUNCTIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreateUserDefinedFunctionRequestPrivate;

class QTAWSGLUE_EXPORT CreateUserDefinedFunctionRequest : public GlueRequest {

public:
    CreateUserDefinedFunctionRequest(const CreateUserDefinedFunctionRequest &other);
    CreateUserDefinedFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserDefinedFunctionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
