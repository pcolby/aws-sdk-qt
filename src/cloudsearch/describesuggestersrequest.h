// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUGGESTERSREQUEST_H
#define QTAWS_DESCRIBESUGGESTERSREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeSuggestersRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT DescribeSuggestersRequest : public CloudSearchRequest {

public:
    DescribeSuggestersRequest(const DescribeSuggestersRequest &other);
    DescribeSuggestersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSuggestersRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
