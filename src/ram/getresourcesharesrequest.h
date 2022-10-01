// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESHARESREQUEST_H
#define QTAWS_GETRESOURCESHARESREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class GetResourceSharesRequestPrivate;

class QTAWSRAM_EXPORT GetResourceSharesRequest : public RamRequest {

public:
    GetResourceSharesRequest(const GetResourceSharesRequest &other);
    GetResourceSharesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceSharesRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
