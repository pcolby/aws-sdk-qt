// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOLUMNSTATISTICSFORTABLEREQUEST_H
#define QTAWS_GETCOLUMNSTATISTICSFORTABLEREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetColumnStatisticsForTableRequestPrivate;

class QTAWSGLUE_EXPORT GetColumnStatisticsForTableRequest : public GlueRequest {

public:
    GetColumnStatisticsForTableRequest(const GetColumnStatisticsForTableRequest &other);
    GetColumnStatisticsForTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetColumnStatisticsForTableRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
