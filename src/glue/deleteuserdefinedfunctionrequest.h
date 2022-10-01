// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERDEFINEDFUNCTIONREQUEST_H
#define QTAWS_DELETEUSERDEFINEDFUNCTIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteUserDefinedFunctionRequestPrivate;

class QTAWSGLUE_EXPORT DeleteUserDefinedFunctionRequest : public GlueRequest {

public:
    DeleteUserDefinedFunctionRequest(const DeleteUserDefinedFunctionRequest &other);
    DeleteUserDefinedFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserDefinedFunctionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
