// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAINGESTIONJOBSRESPONSE_H
#define QTAWS_LISTDATAINGESTIONJOBSRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "listdataingestionjobsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListDataIngestionJobsResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListDataIngestionJobsResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    ListDataIngestionJobsResponse(const ListDataIngestionJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDataIngestionJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataIngestionJobsResponse)
    Q_DISABLE_COPY(ListDataIngestionJobsResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
