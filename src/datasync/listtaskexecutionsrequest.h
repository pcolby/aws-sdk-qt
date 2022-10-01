// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKEXECUTIONSREQUEST_H
#define QTAWS_LISTTASKEXECUTIONSREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class ListTaskExecutionsRequestPrivate;

class QTAWSDATASYNC_EXPORT ListTaskExecutionsRequest : public DataSyncRequest {

public:
    ListTaskExecutionsRequest(const ListTaskExecutionsRequest &other);
    ListTaskExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTaskExecutionsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
