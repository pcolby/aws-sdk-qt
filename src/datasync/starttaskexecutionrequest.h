// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTASKEXECUTIONREQUEST_H
#define QTAWS_STARTTASKEXECUTIONREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class StartTaskExecutionRequestPrivate;

class QTAWSDATASYNC_EXPORT StartTaskExecutionRequest : public DataSyncRequest {

public:
    StartTaskExecutionRequest(const StartTaskExecutionRequest &other);
    StartTaskExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTaskExecutionRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
