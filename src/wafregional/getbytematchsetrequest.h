// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBYTEMATCHSETREQUEST_H
#define QTAWS_GETBYTEMATCHSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class GetByteMatchSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT GetByteMatchSetRequest : public WafRegionalRequest {

public:
    GetByteMatchSetRequest(const GetByteMatchSetRequest &other);
    GetByteMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetByteMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
