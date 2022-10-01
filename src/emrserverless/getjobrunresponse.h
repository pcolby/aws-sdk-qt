// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBRUNRESPONSE_H
#define QTAWS_GETJOBRUNRESPONSE_H

#include "emrserverlessresponse.h"
#include "getjobrunrequest.h"

namespace QtAws {
namespace EmrServerless {

class GetJobRunResponsePrivate;

class QTAWSEMRSERVERLESS_EXPORT GetJobRunResponse : public EmrServerlessResponse {
    Q_OBJECT

public:
    GetJobRunResponse(const GetJobRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJobRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobRunResponse)
    Q_DISABLE_COPY(GetJobRunResponse)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
