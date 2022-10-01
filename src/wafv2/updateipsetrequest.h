// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIPSETREQUEST_H
#define QTAWS_UPDATEIPSETREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class UpdateIPSetRequestPrivate;

class QTAWSWAFV2_EXPORT UpdateIPSetRequest : public Wafv2Request {

public:
    UpdateIPSetRequest(const UpdateIPSetRequest &other);
    UpdateIPSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIPSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
