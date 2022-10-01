// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBSRESPONSE_H
#define QTAWS_LISTJOBSRESPONSE_H

#include "devicefarmresponse.h"
#include "listjobsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListJobsResponsePrivate;

class QTAWSDEVICEFARM_EXPORT ListJobsResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    ListJobsResponse(const ListJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobsResponse)
    Q_DISABLE_COPY(ListJobsResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
