// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOPYJOBREQUEST_H
#define QTAWS_DESCRIBECOPYJOBREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DescribeCopyJobRequestPrivate;

class QTAWSBACKUP_EXPORT DescribeCopyJobRequest : public BackupRequest {

public:
    DescribeCopyJobRequest(const DescribeCopyJobRequest &other);
    DescribeCopyJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCopyJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
