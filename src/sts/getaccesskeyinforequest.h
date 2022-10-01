// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSKEYINFOREQUEST_H
#define QTAWS_GETACCESSKEYINFOREQUEST_H

#include "stsrequest.h"

namespace QtAws {
namespace Sts {

class GetAccessKeyInfoRequestPrivate;

class QTAWSSTS_EXPORT GetAccessKeyInfoRequest : public StsRequest {

public:
    GetAccessKeyInfoRequest(const GetAccessKeyInfoRequest &other);
    GetAccessKeyInfoRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessKeyInfoRequest)

};

} // namespace Sts
} // namespace QtAws

#endif
