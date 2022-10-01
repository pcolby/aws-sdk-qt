// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMAILBOXEXPORTJOBREQUEST_H
#define QTAWS_CANCELMAILBOXEXPORTJOBREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class CancelMailboxExportJobRequestPrivate;

class QTAWSWORKMAIL_EXPORT CancelMailboxExportJobRequest : public WorkMailRequest {

public:
    CancelMailboxExportJobRequest(const CancelMailboxExportJobRequest &other);
    CancelMailboxExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelMailboxExportJobRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
