// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSTATEMENTRESPONSE_H
#define QTAWS_CANCELSTATEMENTRESPONSE_H

#include "redshiftdataresponse.h"
#include "cancelstatementrequest.h"

namespace QtAws {
namespace RedshiftData {

class CancelStatementResponsePrivate;

class QTAWSREDSHIFTDATA_EXPORT CancelStatementResponse : public RedshiftDataResponse {
    Q_OBJECT

public:
    CancelStatementResponse(const CancelStatementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelStatementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelStatementResponse)
    Q_DISABLE_COPY(CancelStatementResponse)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
