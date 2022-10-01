// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLUNACLIENTSREQUEST_H
#define QTAWS_LISTLUNACLIENTSREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class ListLunaClientsRequestPrivate;

class QTAWSCLOUDHSM_EXPORT ListLunaClientsRequest : public CloudHsmRequest {

public:
    ListLunaClientsRequest(const ListLunaClientsRequest &other);
    ListLunaClientsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLunaClientsRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
