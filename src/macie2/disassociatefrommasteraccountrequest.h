// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMMASTERACCOUNTREQUEST_H
#define QTAWS_DISASSOCIATEFROMMASTERACCOUNTREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class DisassociateFromMasterAccountRequestPrivate;

class QTAWSMACIE2_EXPORT DisassociateFromMasterAccountRequest : public Macie2Request {

public:
    DisassociateFromMasterAccountRequest(const DisassociateFromMasterAccountRequest &other);
    DisassociateFromMasterAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateFromMasterAccountRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
