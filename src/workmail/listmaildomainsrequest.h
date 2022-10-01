// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAILDOMAINSREQUEST_H
#define QTAWS_LISTMAILDOMAINSREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMailDomainsRequestPrivate;

class QTAWSWORKMAIL_EXPORT ListMailDomainsRequest : public WorkMailRequest {

public:
    ListMailDomainsRequest(const ListMailDomainsRequest &other);
    ListMailDomainsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMailDomainsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
