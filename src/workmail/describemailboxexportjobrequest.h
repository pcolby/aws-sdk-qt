// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAILBOXEXPORTJOBREQUEST_H
#define QTAWS_DESCRIBEMAILBOXEXPORTJOBREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeMailboxExportJobRequestPrivate;

class QTAWSWORKMAIL_EXPORT DescribeMailboxExportJobRequest : public WorkMailRequest {

public:
    DescribeMailboxExportJobRequest(const DescribeMailboxExportJobRequest &other);
    DescribeMailboxExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMailboxExportJobRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
