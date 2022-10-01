// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLESREQUEST_H
#define QTAWS_GETTABLESREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetTablesRequestPrivate;

class QTAWSGLUE_EXPORT GetTablesRequest : public GlueRequest {

public:
    GetTablesRequest(const GetTablesRequest &other);
    GetTablesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTablesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
