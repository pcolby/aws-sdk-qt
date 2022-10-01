// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTBUNDLEREQUEST_P_H
#define QTAWS_EXPORTBUNDLEREQUEST_P_H

#include "mobilerequest_p.h"
#include "exportbundlerequest.h"

namespace QtAws {
namespace Mobile {

class ExportBundleRequest;

class ExportBundleRequestPrivate : public MobileRequestPrivate {

public:
    ExportBundleRequestPrivate(const MobileRequest::Action action,
                                   ExportBundleRequest * const q);
    ExportBundleRequestPrivate(const ExportBundleRequestPrivate &other,
                                   ExportBundleRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportBundleRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif
