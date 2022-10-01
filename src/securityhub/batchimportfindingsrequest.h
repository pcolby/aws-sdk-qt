// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHIMPORTFINDINGSREQUEST_H
#define QTAWS_BATCHIMPORTFINDINGSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class BatchImportFindingsRequestPrivate;

class QTAWSSECURITYHUB_EXPORT BatchImportFindingsRequest : public SecurityHubRequest {

public:
    BatchImportFindingsRequest(const BatchImportFindingsRequest &other);
    BatchImportFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchImportFindingsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
