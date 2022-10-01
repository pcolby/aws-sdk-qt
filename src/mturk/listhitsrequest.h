// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHITSREQUEST_H
#define QTAWS_LISTHITSREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class ListHITsRequestPrivate;

class QTAWSMTURK_EXPORT ListHITsRequest : public MTurkRequest {

public:
    ListHITsRequest(const ListHITsRequest &other);
    ListHITsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHITsRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
