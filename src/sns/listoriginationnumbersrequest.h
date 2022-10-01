// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINATIONNUMBERSREQUEST_H
#define QTAWS_LISTORIGINATIONNUMBERSREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class ListOriginationNumbersRequestPrivate;

class QTAWSSNS_EXPORT ListOriginationNumbersRequest : public SnsRequest {

public:
    ListOriginationNumbersRequest(const ListOriginationNumbersRequest &other);
    ListOriginationNumbersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOriginationNumbersRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
