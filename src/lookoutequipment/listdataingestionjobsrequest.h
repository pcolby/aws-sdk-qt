// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAINGESTIONJOBSREQUEST_H
#define QTAWS_LISTDATAINGESTIONJOBSREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListDataIngestionJobsRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListDataIngestionJobsRequest : public LookoutEquipmentRequest {

public:
    ListDataIngestionJobsRequest(const ListDataIngestionJobsRequest &other);
    ListDataIngestionJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataIngestionJobsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
