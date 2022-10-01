// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGEXPATTERNSETREQUEST_H
#define QTAWS_GETREGEXPATTERNSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class GetRegexPatternSetRequestPrivate;

class QTAWSWAF_EXPORT GetRegexPatternSetRequest : public WafRequest {

public:
    GetRegexPatternSetRequest(const GetRegexPatternSetRequest &other);
    GetRegexPatternSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegexPatternSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
