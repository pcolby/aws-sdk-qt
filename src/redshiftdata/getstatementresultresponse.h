// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATEMENTRESULTRESPONSE_H
#define QTAWS_GETSTATEMENTRESULTRESPONSE_H

#include "redshiftdataresponse.h"
#include "getstatementresultrequest.h"

namespace QtAws {
namespace RedshiftData {

class GetStatementResultResponsePrivate;

class QTAWSREDSHIFTDATA_EXPORT GetStatementResultResponse : public RedshiftDataResponse {
    Q_OBJECT

public:
    GetStatementResultResponse(const GetStatementResultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStatementResultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStatementResultResponse)
    Q_DISABLE_COPY(GetStatementResultResponse)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
