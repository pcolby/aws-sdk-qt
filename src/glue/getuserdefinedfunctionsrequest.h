// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERDEFINEDFUNCTIONSREQUEST_H
#define QTAWS_GETUSERDEFINEDFUNCTIONSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetUserDefinedFunctionsRequestPrivate;

class QTAWSGLUE_EXPORT GetUserDefinedFunctionsRequest : public GlueRequest {

public:
    GetUserDefinedFunctionsRequest(const GetUserDefinedFunctionsRequest &other);
    GetUserDefinedFunctionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserDefinedFunctionsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
