// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERREQUEST_H
#define QTAWS_DISASSOCIATEMEMBERREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class DisassociateMemberRequestPrivate;

class QTAWSMACIE2_EXPORT DisassociateMemberRequest : public Macie2Request {

public:
    DisassociateMemberRequest(const DisassociateMemberRequest &other);
    DisassociateMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateMemberRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
