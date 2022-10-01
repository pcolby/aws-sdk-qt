// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEDICATEDIPPOOLREQUEST_H
#define QTAWS_DELETEDEDICATEDIPPOOLREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class DeleteDedicatedIpPoolRequestPrivate;

class QTAWSSESV2_EXPORT DeleteDedicatedIpPoolRequest : public SESv2Request {

public:
    DeleteDedicatedIpPoolRequest(const DeleteDedicatedIpPoolRequest &other);
    DeleteDedicatedIpPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDedicatedIpPoolRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
