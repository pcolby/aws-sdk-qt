// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTMETHODREQUEST_H
#define QTAWS_DELETECONTACTMETHODREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteContactMethodRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteContactMethodRequest : public LightsailRequest {

public:
    DeleteContactMethodRequest(const DeleteContactMethodRequest &other);
    DeleteContactMethodRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContactMethodRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
