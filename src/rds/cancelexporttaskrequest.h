// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELEXPORTTASKREQUEST_H
#define QTAWS_CANCELEXPORTTASKREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CancelExportTaskRequestPrivate;

class QTAWSRDS_EXPORT CancelExportTaskRequest : public RdsRequest {

public:
    CancelExportTaskRequest(const CancelExportTaskRequest &other);
    CancelExportTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelExportTaskRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
