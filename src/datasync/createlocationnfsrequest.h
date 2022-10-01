// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONNFSREQUEST_H
#define QTAWS_CREATELOCATIONNFSREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationNfsRequestPrivate;

class QTAWSDATASYNC_EXPORT CreateLocationNfsRequest : public DataSyncRequest {

public:
    CreateLocationNfsRequest(const CreateLocationNfsRequest &other);
    CreateLocationNfsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationNfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
