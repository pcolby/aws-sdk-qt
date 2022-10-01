// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDOMAINACCESSREQUEST_H
#define QTAWS_RESTOREDOMAINACCESSREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class RestoreDomainAccessRequestPrivate;

class QTAWSWORKLINK_EXPORT RestoreDomainAccessRequest : public WorkLinkRequest {

public:
    RestoreDomainAccessRequest(const RestoreDomainAccessRequest &other);
    RestoreDomainAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDomainAccessRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
