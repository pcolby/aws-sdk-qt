// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPSETREQUEST_H
#define QTAWS_CREATEIPSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class CreateIPSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT CreateIPSetRequest : public WafRegionalRequest {

public:
    CreateIPSetRequest(const CreateIPSetRequest &other);
    CreateIPSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIPSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
