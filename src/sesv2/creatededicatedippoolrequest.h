// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEDICATEDIPPOOLREQUEST_H
#define QTAWS_CREATEDEDICATEDIPPOOLREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class CreateDedicatedIpPoolRequestPrivate;

class QTAWSSESV2_EXPORT CreateDedicatedIpPoolRequest : public SESv2Request {

public:
    CreateDedicatedIpPoolRequest(const CreateDedicatedIpPoolRequest &other);
    CreateDedicatedIpPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDedicatedIpPoolRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
