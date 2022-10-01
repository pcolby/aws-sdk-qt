// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOLUMNSTATISTICSFORPARTITIONREQUEST_H
#define QTAWS_DELETECOLUMNSTATISTICSFORPARTITIONREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteColumnStatisticsForPartitionRequestPrivate;

class QTAWSGLUE_EXPORT DeleteColumnStatisticsForPartitionRequest : public GlueRequest {

public:
    DeleteColumnStatisticsForPartitionRequest(const DeleteColumnStatisticsForPartitionRequest &other);
    DeleteColumnStatisticsForPartitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteColumnStatisticsForPartitionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
