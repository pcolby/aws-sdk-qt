// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETASKREQUEST_H
#define QTAWS_DELETETASKREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DeleteTaskRequestPrivate;

class QTAWSDATASYNC_EXPORT DeleteTaskRequest : public DataSyncRequest {

public:
    DeleteTaskRequest(const DeleteTaskRequest &other);
    DeleteTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTaskRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
