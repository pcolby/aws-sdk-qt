// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDATASOURCESYNCJOBREQUEST_H
#define QTAWS_STARTDATASOURCESYNCJOBREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class StartDataSourceSyncJobRequestPrivate;

class QTAWSKENDRA_EXPORT StartDataSourceSyncJobRequest : public KendraRequest {

public:
    StartDataSourceSyncJobRequest(const StartDataSourceSyncJobRequest &other);
    StartDataSourceSyncJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDataSourceSyncJobRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
