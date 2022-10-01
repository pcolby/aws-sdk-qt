// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEFINDINGSRESPONSE_H
#define QTAWS_BATCHUPDATEFINDINGSRESPONSE_H

#include "securityhubresponse.h"
#include "batchupdatefindingsrequest.h"

namespace QtAws {
namespace SecurityHub {

class BatchUpdateFindingsResponsePrivate;

class QTAWSSECURITYHUB_EXPORT BatchUpdateFindingsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    BatchUpdateFindingsResponse(const BatchUpdateFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchUpdateFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdateFindingsResponse)
    Q_DISABLE_COPY(BatchUpdateFindingsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
