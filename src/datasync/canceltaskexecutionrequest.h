// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELTASKEXECUTIONREQUEST_H
#define QTAWS_CANCELTASKEXECUTIONREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class CancelTaskExecutionRequestPrivate;

class QTAWSDATASYNC_EXPORT CancelTaskExecutionRequest : public DataSyncRequest {

public:
    CancelTaskExecutionRequest(const CancelTaskExecutionRequest &other);
    CancelTaskExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelTaskExecutionRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
