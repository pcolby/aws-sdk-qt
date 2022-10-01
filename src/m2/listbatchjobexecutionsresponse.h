// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHJOBEXECUTIONSRESPONSE_H
#define QTAWS_LISTBATCHJOBEXECUTIONSRESPONSE_H

#include "m2response.h"
#include "listbatchjobexecutionsrequest.h"

namespace QtAws {
namespace M2 {

class ListBatchJobExecutionsResponsePrivate;

class QTAWSM2_EXPORT ListBatchJobExecutionsResponse : public M2Response {
    Q_OBJECT

public:
    ListBatchJobExecutionsResponse(const ListBatchJobExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBatchJobExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBatchJobExecutionsResponse)
    Q_DISABLE_COPY(ListBatchJobExecutionsResponse)

};

} // namespace M2
} // namespace QtAws

#endif
