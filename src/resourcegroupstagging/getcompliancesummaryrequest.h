// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCESUMMARYREQUEST_H
#define QTAWS_GETCOMPLIANCESUMMARYREQUEST_H

#include "resourcegroupstaggingrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class GetComplianceSummaryRequestPrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT GetComplianceSummaryRequest : public ResourceGroupsTaggingRequest {

public:
    GetComplianceSummaryRequest(const GetComplianceSummaryRequest &other);
    GetComplianceSummaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComplianceSummaryRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
