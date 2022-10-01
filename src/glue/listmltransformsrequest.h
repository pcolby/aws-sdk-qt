// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMLTRANSFORMSREQUEST_H
#define QTAWS_LISTMLTRANSFORMSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class ListMLTransformsRequestPrivate;

class QTAWSGLUE_EXPORT ListMLTransformsRequest : public GlueRequest {

public:
    ListMLTransformsRequest(const ListMLTransformsRequest &other);
    ListMLTransformsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMLTransformsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
