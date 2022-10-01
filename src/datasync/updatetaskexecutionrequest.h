// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKEXECUTIONREQUEST_H
#define QTAWS_UPDATETASKEXECUTIONREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateTaskExecutionRequestPrivate;

class QTAWSDATASYNC_EXPORT UpdateTaskExecutionRequest : public DataSyncRequest {

public:
    UpdateTaskExecutionRequest(const UpdateTaskExecutionRequest &other);
    UpdateTaskExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTaskExecutionRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
