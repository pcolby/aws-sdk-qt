// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUNDLEINSTANCERESPONSE_H
#define QTAWS_BUNDLEINSTANCERESPONSE_H

#include "ec2response.h"
#include "bundleinstancerequest.h"

namespace QtAws {
namespace Ec2 {

class BundleInstanceResponsePrivate;

class QTAWSEC2_EXPORT BundleInstanceResponse : public Ec2Response {
    Q_OBJECT

public:
    BundleInstanceResponse(const BundleInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BundleInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BundleInstanceResponse)
    Q_DISABLE_COPY(BundleInstanceResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
