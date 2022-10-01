// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBRUNSRESPONSE_H
#define QTAWS_LISTJOBRUNSRESPONSE_H

#include "emrserverlessresponse.h"
#include "listjobrunsrequest.h"

namespace QtAws {
namespace EmrServerless {

class ListJobRunsResponsePrivate;

class QTAWSEMRSERVERLESS_EXPORT ListJobRunsResponse : public EmrServerlessResponse {
    Q_OBJECT

public:
    ListJobRunsResponse(const ListJobRunsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListJobRunsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobRunsResponse)
    Q_DISABLE_COPY(ListJobRunsResponse)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
