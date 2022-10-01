// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONREQUEST_H
#define QTAWS_DELETEORGANIZATIONREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteOrganizationRequestPrivate;

class QTAWSWORKMAIL_EXPORT DeleteOrganizationRequest : public WorkMailRequest {

public:
    DeleteOrganizationRequest(const DeleteOrganizationRequest &other);
    DeleteOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOrganizationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
