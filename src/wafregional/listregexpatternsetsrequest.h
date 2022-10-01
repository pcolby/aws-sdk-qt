// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGEXPATTERNSETSREQUEST_H
#define QTAWS_LISTREGEXPATTERNSETSREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class ListRegexPatternSetsRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT ListRegexPatternSetsRequest : public WafRegionalRequest {

public:
    ListRegexPatternSetsRequest(const ListRegexPatternSetsRequest &other);
    ListRegexPatternSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRegexPatternSetsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
