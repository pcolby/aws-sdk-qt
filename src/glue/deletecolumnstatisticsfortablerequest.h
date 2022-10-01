// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOLUMNSTATISTICSFORTABLEREQUEST_H
#define QTAWS_DELETECOLUMNSTATISTICSFORTABLEREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteColumnStatisticsForTableRequestPrivate;

class QTAWSGLUE_EXPORT DeleteColumnStatisticsForTableRequest : public GlueRequest {

public:
    DeleteColumnStatisticsForTableRequest(const DeleteColumnStatisticsForTableRequest &other);
    DeleteColumnStatisticsForTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteColumnStatisticsForTableRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
