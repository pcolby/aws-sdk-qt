// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTJOBRUNRESPONSE_H
#define QTAWS_STARTJOBRUNRESPONSE_H

#include "emrserverlessresponse.h"
#include "startjobrunrequest.h"

namespace QtAws {
namespace EmrServerless {

class StartJobRunResponsePrivate;

class QTAWSEMRSERVERLESS_EXPORT StartJobRunResponse : public EmrServerlessResponse {
    Q_OBJECT

public:
    StartJobRunResponse(const StartJobRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartJobRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartJobRunResponse)
    Q_DISABLE_COPY(StartJobRunResponse)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
