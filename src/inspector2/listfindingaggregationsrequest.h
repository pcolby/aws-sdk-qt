// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGAGGREGATIONSREQUEST_H
#define QTAWS_LISTFINDINGAGGREGATIONSREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class ListFindingAggregationsRequestPrivate;

class QTAWSINSPECTOR2_EXPORT ListFindingAggregationsRequest : public Inspector2Request {

public:
    ListFindingAggregationsRequest(const ListFindingAggregationsRequest &other);
    ListFindingAggregationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFindingAggregationsRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
