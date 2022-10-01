// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXLUSTREREQUEST_H
#define QTAWS_CREATELOCATIONFSXLUSTREREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxLustreRequestPrivate;

class QTAWSDATASYNC_EXPORT CreateLocationFsxLustreRequest : public DataSyncRequest {

public:
    CreateLocationFsxLustreRequest(const CreateLocationFsxLustreRequest &other);
    CreateLocationFsxLustreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationFsxLustreRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
