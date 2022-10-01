// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYSTATISTICSREQUEST_H
#define QTAWS_GETQUERYSTATISTICSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetQueryStatisticsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT GetQueryStatisticsRequest : public LakeFormationRequest {

public:
    GetQueryStatisticsRequest(const GetQueryStatisticsRequest &other);
    GetQueryStatisticsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueryStatisticsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
