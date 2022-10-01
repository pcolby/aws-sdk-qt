// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBRUNRESPONSE_H
#define QTAWS_CANCELJOBRUNRESPONSE_H

#include "emrserverlessresponse.h"
#include "canceljobrunrequest.h"

namespace QtAws {
namespace EmrServerless {

class CancelJobRunResponsePrivate;

class QTAWSEMRSERVERLESS_EXPORT CancelJobRunResponse : public EmrServerlessResponse {
    Q_OBJECT

public:
    CancelJobRunResponse(const CancelJobRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelJobRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelJobRunResponse)
    Q_DISABLE_COPY(CancelJobRunResponse)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
