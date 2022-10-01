// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMAVERSIONREQUEST_H
#define QTAWS_GETSCHEMAVERSIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetSchemaVersionRequestPrivate;

class QTAWSGLUE_EXPORT GetSchemaVersionRequest : public GlueRequest {

public:
    GetSchemaVersionRequest(const GetSchemaVersionRequest &other);
    GetSchemaVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSchemaVersionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
