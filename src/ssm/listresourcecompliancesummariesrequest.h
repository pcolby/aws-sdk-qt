// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCECOMPLIANCESUMMARIESREQUEST_H
#define QTAWS_LISTRESOURCECOMPLIANCESUMMARIESREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ListResourceComplianceSummariesRequestPrivate;

class QTAWSSSM_EXPORT ListResourceComplianceSummariesRequest : public SsmRequest {

public:
    ListResourceComplianceSummariesRequest(const ListResourceComplianceSummariesRequest &other);
    ListResourceComplianceSummariesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceComplianceSummariesRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
