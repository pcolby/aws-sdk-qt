// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBYTEMATCHSETSREQUEST_H
#define QTAWS_LISTBYTEMATCHSETSREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class ListByteMatchSetsRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT ListByteMatchSetsRequest : public WafRegionalRequest {

public:
    ListByteMatchSetsRequest(const ListByteMatchSetsRequest &other);
    ListByteMatchSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListByteMatchSetsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
