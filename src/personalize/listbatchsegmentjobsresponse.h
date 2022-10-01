// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHSEGMENTJOBSRESPONSE_H
#define QTAWS_LISTBATCHSEGMENTJOBSRESPONSE_H

#include "personalizeresponse.h"
#include "listbatchsegmentjobsrequest.h"

namespace QtAws {
namespace Personalize {

class ListBatchSegmentJobsResponsePrivate;

class QTAWSPERSONALIZE_EXPORT ListBatchSegmentJobsResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    ListBatchSegmentJobsResponse(const ListBatchSegmentJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBatchSegmentJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBatchSegmentJobsResponse)
    Q_DISABLE_COPY(ListBatchSegmentJobsResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
