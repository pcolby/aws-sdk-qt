// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKSREQUEST_H
#define QTAWS_LISTTASKSREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class ListTasksRequestPrivate;

class QTAWSDATASYNC_EXPORT ListTasksRequest : public DataSyncRequest {

public:
    ListTasksRequest(const ListTasksRequest &other);
    ListTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTasksRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
