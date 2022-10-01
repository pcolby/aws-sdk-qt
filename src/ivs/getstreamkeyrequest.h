// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMKEYREQUEST_H
#define QTAWS_GETSTREAMKEYREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class GetStreamKeyRequestPrivate;

class QTAWSIVS_EXPORT GetStreamKeyRequest : public IvsRequest {

public:
    GetStreamKeyRequest(const GetStreamKeyRequest &other);
    GetStreamKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStreamKeyRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
