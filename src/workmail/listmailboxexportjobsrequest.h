// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAILBOXEXPORTJOBSREQUEST_H
#define QTAWS_LISTMAILBOXEXPORTJOBSREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMailboxExportJobsRequestPrivate;

class QTAWSWORKMAIL_EXPORT ListMailboxExportJobsRequest : public WorkMailRequest {

public:
    ListMailboxExportJobsRequest(const ListMailboxExportJobsRequest &other);
    ListMailboxExportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMailboxExportJobsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
