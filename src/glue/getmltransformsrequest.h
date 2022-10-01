// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTRANSFORMSREQUEST_H
#define QTAWS_GETMLTRANSFORMSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetMLTransformsRequestPrivate;

class QTAWSGLUE_EXPORT GetMLTransformsRequest : public GlueRequest {

public:
    GetMLTransformsRequest(const GetMLTransformsRequest &other);
    GetMLTransformsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMLTransformsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
