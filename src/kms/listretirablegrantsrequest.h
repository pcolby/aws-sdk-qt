// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRETIRABLEGRANTSREQUEST_H
#define QTAWS_LISTRETIRABLEGRANTSREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class ListRetirableGrantsRequestPrivate;

class QTAWSKMS_EXPORT ListRetirableGrantsRequest : public KmsRequest {

public:
    ListRetirableGrantsRequest(const ListRetirableGrantsRequest &other);
    ListRetirableGrantsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRetirableGrantsRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
