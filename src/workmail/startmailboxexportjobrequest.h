// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMAILBOXEXPORTJOBREQUEST_H
#define QTAWS_STARTMAILBOXEXPORTJOBREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class StartMailboxExportJobRequestPrivate;

class QTAWSWORKMAIL_EXPORT StartMailboxExportJobRequest : public WorkMailRequest {

public:
    StartMailboxExportJobRequest(const StartMailboxExportJobRequest &other);
    StartMailboxExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMailboxExportJobRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
