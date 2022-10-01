// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGEXMATCHSETSREQUEST_H
#define QTAWS_LISTREGEXMATCHSETSREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class ListRegexMatchSetsRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT ListRegexMatchSetsRequest : public WafRegionalRequest {

public:
    ListRegexMatchSetsRequest(const ListRegexMatchSetsRequest &other);
    ListRegexMatchSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRegexMatchSetsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
