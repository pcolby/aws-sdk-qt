// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTBUNDLEREQUEST_H
#define QTAWS_EXPORTBUNDLEREQUEST_H

#include "mobilerequest.h"

namespace QtAws {
namespace Mobile {

class ExportBundleRequestPrivate;

class QTAWSMOBILE_EXPORT ExportBundleRequest : public MobileRequest {

public:
    ExportBundleRequest(const ExportBundleRequest &other);
    ExportBundleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportBundleRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif
