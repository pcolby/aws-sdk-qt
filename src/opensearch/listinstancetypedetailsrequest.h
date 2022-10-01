// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCETYPEDETAILSREQUEST_H
#define QTAWS_LISTINSTANCETYPEDETAILSREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class ListInstanceTypeDetailsRequestPrivate;

class QTAWSOPENSEARCH_EXPORT ListInstanceTypeDetailsRequest : public OpenSearchRequest {

public:
    ListInstanceTypeDetailsRequest(const ListInstanceTypeDetailsRequest &other);
    ListInstanceTypeDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstanceTypeDetailsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
