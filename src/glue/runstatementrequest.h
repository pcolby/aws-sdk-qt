// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNSTATEMENTREQUEST_H
#define QTAWS_RUNSTATEMENTREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class RunStatementRequestPrivate;

class QTAWSGLUE_EXPORT RunStatementRequest : public GlueRequest {

public:
    RunStatementRequest(const RunStatementRequest &other);
    RunStatementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RunStatementRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
