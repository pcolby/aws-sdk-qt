// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGEXPATTERNSETREQUEST_H
#define QTAWS_GETREGEXPATTERNSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class GetRegexPatternSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT GetRegexPatternSetRequest : public WafRegionalRequest {

public:
    GetRegexPatternSetRequest(const GetRegexPatternSetRequest &other);
    GetRegexPatternSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegexPatternSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
