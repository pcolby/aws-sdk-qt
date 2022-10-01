// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMEMBERREQUEST_H
#define QTAWS_ASSOCIATEMEMBERREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class AssociateMemberRequestPrivate;

class QTAWSINSPECTOR2_EXPORT AssociateMemberRequest : public Inspector2Request {

public:
    AssociateMemberRequest(const AssociateMemberRequest &other);
    AssociateMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateMemberRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
