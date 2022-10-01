// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESQLRESPONSE_H
#define QTAWS_EXECUTESQLRESPONSE_H

#include "rdsdataresponse.h"
#include "executesqlrequest.h"

namespace QtAws {
namespace RdsData {

class ExecuteSqlResponsePrivate;

class QTAWSRDSDATA_EXPORT ExecuteSqlResponse : public RdsDataResponse {
    Q_OBJECT

public:
    ExecuteSqlResponse(const ExecuteSqlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExecuteSqlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteSqlResponse)
    Q_DISABLE_COPY(ExecuteSqlResponse)

};

} // namespace RdsData
} // namespace QtAws

#endif
