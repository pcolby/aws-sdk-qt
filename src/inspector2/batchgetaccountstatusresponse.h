// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETACCOUNTSTATUSRESPONSE_H
#define QTAWS_BATCHGETACCOUNTSTATUSRESPONSE_H

#include "inspector2response.h"
#include "batchgetaccountstatusrequest.h"

namespace QtAws {
namespace Inspector2 {

class BatchGetAccountStatusResponsePrivate;

class QTAWSINSPECTOR2_EXPORT BatchGetAccountStatusResponse : public Inspector2Response {
    Q_OBJECT

public:
    BatchGetAccountStatusResponse(const BatchGetAccountStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetAccountStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetAccountStatusResponse)
    Q_DISABLE_COPY(BatchGetAccountStatusResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
