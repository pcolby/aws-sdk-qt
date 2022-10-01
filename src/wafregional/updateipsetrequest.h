// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIPSETREQUEST_H
#define QTAWS_UPDATEIPSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateIPSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT UpdateIPSetRequest : public WafRegionalRequest {

public:
    UpdateIPSetRequest(const UpdateIPSetRequest &other);
    UpdateIPSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIPSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
