// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUPPORTEDRESOURCETYPESREQUEST_H
#define QTAWS_GETSUPPORTEDRESOURCETYPESREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class GetSupportedResourceTypesRequestPrivate;

class QTAWSBACKUP_EXPORT GetSupportedResourceTypesRequest : public BackupRequest {

public:
    GetSupportedResourceTypesRequest(const GetSupportedResourceTypesRequest &other);
    GetSupportedResourceTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSupportedResourceTypesRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
