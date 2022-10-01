// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERSCHEMAVERSIONREQUEST_H
#define QTAWS_REGISTERSCHEMAVERSIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class RegisterSchemaVersionRequestPrivate;

class QTAWSGLUE_EXPORT RegisterSchemaVersionRequest : public GlueRequest {

public:
    RegisterSchemaVersionRequest(const RegisterSchemaVersionRequest &other);
    RegisterSchemaVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterSchemaVersionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
