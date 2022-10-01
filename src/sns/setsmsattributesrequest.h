// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSMSATTRIBUTESREQUEST_H
#define QTAWS_SETSMSATTRIBUTESREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class SetSMSAttributesRequestPrivate;

class QTAWSSNS_EXPORT SetSMSAttributesRequest : public SnsRequest {

public:
    SetSMSAttributesRequest(const SetSMSAttributesRequest &other);
    SetSMSAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetSMSAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
