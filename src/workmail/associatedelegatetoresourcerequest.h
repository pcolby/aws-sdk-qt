// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDELEGATETORESOURCEREQUEST_H
#define QTAWS_ASSOCIATEDELEGATETORESOURCEREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class AssociateDelegateToResourceRequestPrivate;

class QTAWSWORKMAIL_EXPORT AssociateDelegateToResourceRequest : public WorkMailRequest {

public:
    AssociateDelegateToResourceRequest(const AssociateDelegateToResourceRequest &other);
    AssociateDelegateToResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDelegateToResourceRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
