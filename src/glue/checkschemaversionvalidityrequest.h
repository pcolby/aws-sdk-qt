// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKSCHEMAVERSIONVALIDITYREQUEST_H
#define QTAWS_CHECKSCHEMAVERSIONVALIDITYREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CheckSchemaVersionValidityRequestPrivate;

class QTAWSGLUE_EXPORT CheckSchemaVersionValidityRequest : public GlueRequest {

public:
    CheckSchemaVersionValidityRequest(const CheckSchemaVersionValidityRequest &other);
    CheckSchemaVersionValidityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckSchemaVersionValidityRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
