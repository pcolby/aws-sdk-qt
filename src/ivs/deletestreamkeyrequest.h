// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMKEYREQUEST_H
#define QTAWS_DELETESTREAMKEYREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class DeleteStreamKeyRequestPrivate;

class QTAWSIVS_EXPORT DeleteStreamKeyRequest : public IvsRequest {

public:
    DeleteStreamKeyRequest(const DeleteStreamKeyRequest &other);
    DeleteStreamKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStreamKeyRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
