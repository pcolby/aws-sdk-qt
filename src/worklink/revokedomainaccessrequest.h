// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEDOMAINACCESSREQUEST_H
#define QTAWS_REVOKEDOMAINACCESSREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class RevokeDomainAccessRequestPrivate;

class QTAWSWORKLINK_EXPORT RevokeDomainAccessRequest : public WorkLinkRequest {

public:
    RevokeDomainAccessRequest(const RevokeDomainAccessRequest &other);
    RevokeDomainAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeDomainAccessRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
