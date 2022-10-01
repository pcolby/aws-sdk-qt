// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMAVERSIONSDIFFREQUEST_H
#define QTAWS_GETSCHEMAVERSIONSDIFFREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetSchemaVersionsDiffRequestPrivate;

class QTAWSGLUE_EXPORT GetSchemaVersionsDiffRequest : public GlueRequest {

public:
    GetSchemaVersionsDiffRequest(const GetSchemaVersionsDiffRequest &other);
    GetSchemaVersionsDiffRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSchemaVersionsDiffRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
