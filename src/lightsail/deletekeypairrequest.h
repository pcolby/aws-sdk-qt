// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYPAIRREQUEST_H
#define QTAWS_DELETEKEYPAIRREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteKeyPairRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteKeyPairRequest : public LightsailRequest {

public:
    DeleteKeyPairRequest(const DeleteKeyPairRequest &other);
    DeleteKeyPairRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteKeyPairRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
