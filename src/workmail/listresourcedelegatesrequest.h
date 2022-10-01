// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEDELEGATESREQUEST_H
#define QTAWS_LISTRESOURCEDELEGATESREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class ListResourceDelegatesRequestPrivate;

class QTAWSWORKMAIL_EXPORT ListResourceDelegatesRequest : public WorkMailRequest {

public:
    ListResourceDelegatesRequest(const ListResourceDelegatesRequest &other);
    ListResourceDelegatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceDelegatesRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
