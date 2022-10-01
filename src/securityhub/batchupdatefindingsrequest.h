// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEFINDINGSREQUEST_H
#define QTAWS_BATCHUPDATEFINDINGSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class BatchUpdateFindingsRequestPrivate;

class QTAWSSECURITYHUB_EXPORT BatchUpdateFindingsRequest : public SecurityHubRequest {

public:
    BatchUpdateFindingsRequest(const BatchUpdateFindingsRequest &other);
    BatchUpdateFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdateFindingsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
