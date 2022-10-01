// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGELIMITRESPONSE_H
#define QTAWS_DELETEUSAGELIMITRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "deleteusagelimitrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class DeleteUsageLimitResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT DeleteUsageLimitResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    DeleteUsageLimitResponse(const DeleteUsageLimitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUsageLimitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUsageLimitResponse)
    Q_DISABLE_COPY(DeleteUsageLimitResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
