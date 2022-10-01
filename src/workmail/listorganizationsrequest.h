// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONSREQUEST_H
#define QTAWS_LISTORGANIZATIONSREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class ListOrganizationsRequestPrivate;

class QTAWSWORKMAIL_EXPORT ListOrganizationsRequest : public WorkMailRequest {

public:
    ListOrganizationsRequest(const ListOrganizationsRequest &other);
    ListOrganizationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrganizationsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
