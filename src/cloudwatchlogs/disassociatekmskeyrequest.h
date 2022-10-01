// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEKMSKEYREQUEST_H
#define QTAWS_DISASSOCIATEKMSKEYREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DisassociateKmsKeyRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DisassociateKmsKeyRequest : public CloudWatchLogsRequest {

public:
    DisassociateKmsKeyRequest(const DisassociateKmsKeyRequest &other);
    DisassociateKmsKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateKmsKeyRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
