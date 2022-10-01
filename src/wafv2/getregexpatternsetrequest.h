// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGEXPATTERNSETREQUEST_H
#define QTAWS_GETREGEXPATTERNSETREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class GetRegexPatternSetRequestPrivate;

class QTAWSWAFV2_EXPORT GetRegexPatternSetRequest : public Wafv2Request {

public:
    GetRegexPatternSetRequest(const GetRegexPatternSetRequest &other);
    GetRegexPatternSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegexPatternSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
