// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISABLESTANDARDSRESPONSE_H
#define QTAWS_BATCHDISABLESTANDARDSRESPONSE_H

#include "securityhubresponse.h"
#include "batchdisablestandardsrequest.h"

namespace QtAws {
namespace SecurityHub {

class BatchDisableStandardsResponsePrivate;

class QTAWSSECURITYHUB_EXPORT BatchDisableStandardsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    BatchDisableStandardsResponse(const BatchDisableStandardsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDisableStandardsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisableStandardsResponse)
    Q_DISABLE_COPY(BatchDisableStandardsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
