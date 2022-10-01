// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOLUMNSTATISTICSFORTABLEREQUEST_H
#define QTAWS_UPDATECOLUMNSTATISTICSFORTABLEREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class UpdateColumnStatisticsForTableRequestPrivate;

class QTAWSGLUE_EXPORT UpdateColumnStatisticsForTableRequest : public GlueRequest {

public:
    UpdateColumnStatisticsForTableRequest(const UpdateColumnStatisticsForTableRequest &other);
    UpdateColumnStatisticsForTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateColumnStatisticsForTableRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
