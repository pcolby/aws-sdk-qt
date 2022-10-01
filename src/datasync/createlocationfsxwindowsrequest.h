// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXWINDOWSREQUEST_H
#define QTAWS_CREATELOCATIONFSXWINDOWSREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxWindowsRequestPrivate;

class QTAWSDATASYNC_EXPORT CreateLocationFsxWindowsRequest : public DataSyncRequest {

public:
    CreateLocationFsxWindowsRequest(const CreateLocationFsxWindowsRequest &other);
    CreateLocationFsxWindowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationFsxWindowsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
