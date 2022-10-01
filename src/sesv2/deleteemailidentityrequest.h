// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILIDENTITYREQUEST_H
#define QTAWS_DELETEEMAILIDENTITYREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class DeleteEmailIdentityRequestPrivate;

class QTAWSSESV2_EXPORT DeleteEmailIdentityRequest : public SESv2Request {

public:
    DeleteEmailIdentityRequest(const DeleteEmailIdentityRequest &other);
    DeleteEmailIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEmailIdentityRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
