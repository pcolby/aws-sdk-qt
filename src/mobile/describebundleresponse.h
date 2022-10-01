// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUNDLERESPONSE_H
#define QTAWS_DESCRIBEBUNDLERESPONSE_H

#include "mobileresponse.h"
#include "describebundlerequest.h"

namespace QtAws {
namespace Mobile {

class DescribeBundleResponsePrivate;

class QTAWSMOBILE_EXPORT DescribeBundleResponse : public MobileResponse {
    Q_OBJECT

public:
    DescribeBundleResponse(const DescribeBundleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBundleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBundleResponse)
    Q_DISABLE_COPY(DescribeBundleResponse)

};

} // namespace Mobile
} // namespace QtAws

#endif
