// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPORTTASKREQUEST_H
#define QTAWS_STARTEXPORTTASKREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class StartExportTaskRequestPrivate;

class QTAWSRDS_EXPORT StartExportTaskRequest : public RdsRequest {

public:
    StartExportTaskRequest(const StartExportTaskRequest &other);
    StartExportTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartExportTaskRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
