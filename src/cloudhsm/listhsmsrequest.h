// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHSMSREQUEST_H
#define QTAWS_LISTHSMSREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class ListHsmsRequestPrivate;

class QTAWSCLOUDHSM_EXPORT ListHsmsRequest : public CloudHsmRequest {

public:
    ListHsmsRequest(const ListHsmsRequest &other);
    ListHsmsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHsmsRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
