// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHENABLESTANDARDSREQUEST_H
#define QTAWS_BATCHENABLESTANDARDSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class BatchEnableStandardsRequestPrivate;

class QTAWSSECURITYHUB_EXPORT BatchEnableStandardsRequest : public SecurityHubRequest {

public:
    BatchEnableStandardsRequest(const BatchEnableStandardsRequest &other);
    BatchEnableStandardsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchEnableStandardsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
