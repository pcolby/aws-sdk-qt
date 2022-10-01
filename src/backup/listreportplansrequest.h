// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTPLANSREQUEST_H
#define QTAWS_LISTREPORTPLANSREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class ListReportPlansRequestPrivate;

class QTAWSBACKUP_EXPORT ListReportPlansRequest : public BackupRequest {

public:
    ListReportPlansRequest(const ListReportPlansRequest &other);
    ListReportPlansRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReportPlansRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
