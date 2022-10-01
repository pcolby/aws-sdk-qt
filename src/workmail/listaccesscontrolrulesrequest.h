// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSCONTROLRULESREQUEST_H
#define QTAWS_LISTACCESSCONTROLRULESREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class ListAccessControlRulesRequestPrivate;

class QTAWSWORKMAIL_EXPORT ListAccessControlRulesRequest : public WorkMailRequest {

public:
    ListAccessControlRulesRequest(const ListAccessControlRulesRequest &other);
    ListAccessControlRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessControlRulesRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
