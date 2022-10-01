// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUNDLEREQUEST_H
#define QTAWS_DESCRIBEBUNDLEREQUEST_H

#include "mobilerequest.h"

namespace QtAws {
namespace Mobile {

class DescribeBundleRequestPrivate;

class QTAWSMOBILE_EXPORT DescribeBundleRequest : public MobileRequest {

public:
    DescribeBundleRequest(const DescribeBundleRequest &other);
    DescribeBundleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBundleRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif
