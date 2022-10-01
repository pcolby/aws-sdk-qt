// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETNAMEDQUERYRESPONSE_H
#define QTAWS_BATCHGETNAMEDQUERYRESPONSE_H

#include "athenaresponse.h"
#include "batchgetnamedqueryrequest.h"

namespace QtAws {
namespace Athena {

class BatchGetNamedQueryResponsePrivate;

class QTAWSATHENA_EXPORT BatchGetNamedQueryResponse : public AthenaResponse {
    Q_OBJECT

public:
    BatchGetNamedQueryResponse(const BatchGetNamedQueryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetNamedQueryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetNamedQueryResponse)
    Q_DISABLE_COPY(BatchGetNamedQueryResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
