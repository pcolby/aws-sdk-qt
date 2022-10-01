// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBYTEMATCHSETREQUEST_H
#define QTAWS_GETBYTEMATCHSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class GetByteMatchSetRequestPrivate;

class QTAWSWAF_EXPORT GetByteMatchSetRequest : public WafRequest {

public:
    GetByteMatchSetRequest(const GetByteMatchSetRequest &other);
    GetByteMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetByteMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
