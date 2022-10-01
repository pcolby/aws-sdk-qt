// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHENABLESTANDARDSRESPONSE_H
#define QTAWS_BATCHENABLESTANDARDSRESPONSE_H

#include "securityhubresponse.h"
#include "batchenablestandardsrequest.h"

namespace QtAws {
namespace SecurityHub {

class BatchEnableStandardsResponsePrivate;

class QTAWSSECURITYHUB_EXPORT BatchEnableStandardsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    BatchEnableStandardsResponse(const BatchEnableStandardsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchEnableStandardsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchEnableStandardsResponse)
    Q_DISABLE_COPY(BatchEnableStandardsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
