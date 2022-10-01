// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATEMENTREQUEST_H
#define QTAWS_GETSTATEMENTREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetStatementRequestPrivate;

class QTAWSGLUE_EXPORT GetStatementRequest : public GlueRequest {

public:
    GetStatementRequest(const GetStatementRequest &other);
    GetStatementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStatementRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
