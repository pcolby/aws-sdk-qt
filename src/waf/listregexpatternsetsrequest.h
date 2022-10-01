// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGEXPATTERNSETSREQUEST_H
#define QTAWS_LISTREGEXPATTERNSETSREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class ListRegexPatternSetsRequestPrivate;

class QTAWSWAF_EXPORT ListRegexPatternSetsRequest : public WafRequest {

public:
    ListRegexPatternSetsRequest(const ListRegexPatternSetsRequest &other);
    ListRegexPatternSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRegexPatternSetsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
