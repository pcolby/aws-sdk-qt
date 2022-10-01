// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERDEFINEDFUNCTIONREQUEST_H
#define QTAWS_UPDATEUSERDEFINEDFUNCTIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class UpdateUserDefinedFunctionRequestPrivate;

class QTAWSGLUE_EXPORT UpdateUserDefinedFunctionRequest : public GlueRequest {

public:
    UpdateUserDefinedFunctionRequest(const UpdateUserDefinedFunctionRequest &other);
    UpdateUserDefinedFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserDefinedFunctionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
