// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGREQUEST_H
#define QTAWS_GETCONFIGREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class GetConfigRequestPrivate;

class QTAWSCLOUDHSM_EXPORT GetConfigRequest : public CloudHsmRequest {

public:
    GetConfigRequest(const GetConfigRequest &other);
    GetConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
