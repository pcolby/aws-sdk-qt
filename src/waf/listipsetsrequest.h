// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIPSETSREQUEST_H
#define QTAWS_LISTIPSETSREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class ListIPSetsRequestPrivate;

class QTAWSWAF_EXPORT ListIPSetsRequest : public WafRequest {

public:
    ListIPSetsRequest(const ListIPSetsRequest &other);
    ListIPSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIPSetsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
