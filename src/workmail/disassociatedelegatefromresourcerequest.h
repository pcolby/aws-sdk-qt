// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDELEGATEFROMRESOURCEREQUEST_H
#define QTAWS_DISASSOCIATEDELEGATEFROMRESOURCEREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DisassociateDelegateFromResourceRequestPrivate;

class QTAWSWORKMAIL_EXPORT DisassociateDelegateFromResourceRequest : public WorkMailRequest {

public:
    DisassociateDelegateFromResourceRequest(const DisassociateDelegateFromResourceRequest &other);
    DisassociateDelegateFromResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateDelegateFromResourceRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
