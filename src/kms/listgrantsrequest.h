// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGRANTSREQUEST_H
#define QTAWS_LISTGRANTSREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class ListGrantsRequestPrivate;

class QTAWSKMS_EXPORT ListGrantsRequest : public KmsRequest {

public:
    ListGrantsRequest(const ListGrantsRequest &other);
    ListGrantsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGrantsRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
