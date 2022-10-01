// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELUNACLIENTREQUEST_H
#define QTAWS_DESCRIBELUNACLIENTREQUEST_H

#include "cloudhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class DescribeLunaClientRequestPrivate;

class QTAWSCLOUDHSM_EXPORT DescribeLunaClientRequest : public CloudHsmRequest {

public:
    DescribeLunaClientRequest(const DescribeLunaClientRequest &other);
    DescribeLunaClientRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLunaClientRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
