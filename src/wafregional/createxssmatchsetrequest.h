// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEXSSMATCHSETREQUEST_H
#define QTAWS_CREATEXSSMATCHSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class CreateXssMatchSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT CreateXssMatchSetRequest : public WafRegionalRequest {

public:
    CreateXssMatchSetRequest(const CreateXssMatchSetRequest &other);
    CreateXssMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateXssMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
