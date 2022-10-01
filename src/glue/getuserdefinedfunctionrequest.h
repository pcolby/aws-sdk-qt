// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERDEFINEDFUNCTIONREQUEST_H
#define QTAWS_GETUSERDEFINEDFUNCTIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetUserDefinedFunctionRequestPrivate;

class QTAWSGLUE_EXPORT GetUserDefinedFunctionRequest : public GlueRequest {

public:
    GetUserDefinedFunctionRequest(const GetUserDefinedFunctionRequest &other);
    GetUserDefinedFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserDefinedFunctionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
