// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLOCKRESPONSE_H
#define QTAWS_GETBLOCKRESPONSE_H

#include "qldbresponse.h"
#include "getblockrequest.h"

namespace QtAws {
namespace Qldb {

class GetBlockResponsePrivate;

class QTAWSQLDB_EXPORT GetBlockResponse : public QldbResponse {
    Q_OBJECT

public:
    GetBlockResponse(const GetBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBlockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBlockResponse)
    Q_DISABLE_COPY(GetBlockResponse)

};

} // namespace Qldb
} // namespace QtAws

#endif
