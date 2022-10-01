// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATABASESREQUEST_H
#define QTAWS_GETDATABASESREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetDatabasesRequestPrivate;

class QTAWSGLUE_EXPORT GetDatabasesRequest : public GlueRequest {

public:
    GetDatabasesRequest(const GetDatabasesRequest &other);
    GetDatabasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDatabasesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
