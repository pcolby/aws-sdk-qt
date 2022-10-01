// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSTATEMENTREQUEST_H
#define QTAWS_CANCELSTATEMENTREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CancelStatementRequestPrivate;

class QTAWSGLUE_EXPORT CancelStatementRequest : public GlueRequest {

public:
    CancelStatementRequest(const CancelStatementRequest &other);
    CancelStatementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelStatementRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
