// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCATIONREQUEST_H
#define QTAWS_DELETELOCATIONREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DeleteLocationRequestPrivate;

class QTAWSDATASYNC_EXPORT DeleteLocationRequest : public DataSyncRequest {

public:
    DeleteLocationRequest(const DeleteLocationRequest &other);
    DeleteLocationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLocationRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
