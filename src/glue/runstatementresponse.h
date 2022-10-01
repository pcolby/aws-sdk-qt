// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNSTATEMENTRESPONSE_H
#define QTAWS_RUNSTATEMENTRESPONSE_H

#include "glueresponse.h"
#include "runstatementrequest.h"

namespace QtAws {
namespace Glue {

class RunStatementResponsePrivate;

class QTAWSGLUE_EXPORT RunStatementResponse : public GlueResponse {
    Q_OBJECT

public:
    RunStatementResponse(const RunStatementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RunStatementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RunStatementResponse)
    Q_DISABLE_COPY(RunStatementResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
