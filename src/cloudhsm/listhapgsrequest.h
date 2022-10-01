// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHAPGSREQUEST_H
#define QTAWS_LISTHAPGSREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class ListHapgsRequestPrivate;

class QTAWSCLOUDHSM_EXPORT ListHapgsRequest : public CloudHsmRequest {

public:
    ListHapgsRequest(const ListHapgsRequest &other);
    ListHapgsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHapgsRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
