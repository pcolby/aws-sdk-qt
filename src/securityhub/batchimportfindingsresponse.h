// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHIMPORTFINDINGSRESPONSE_H
#define QTAWS_BATCHIMPORTFINDINGSRESPONSE_H

#include "securityhubresponse.h"
#include "batchimportfindingsrequest.h"

namespace QtAws {
namespace SecurityHub {

class BatchImportFindingsResponsePrivate;

class QTAWSSECURITYHUB_EXPORT BatchImportFindingsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    BatchImportFindingsResponse(const BatchImportFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchImportFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchImportFindingsResponse)
    Q_DISABLE_COPY(BatchImportFindingsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
