// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PANORAMAREQUEST_P_H
#define QTAWS_PANORAMAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class PanoramaRequest;

class PanoramaRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PanoramaRequest::Action action; ///< Panorama action to be performed.
    QString apiVersion;        ///< Panorama API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Panorama request (query string) parameters. @todo?

    PanoramaRequestPrivate(const PanoramaRequest::Action action, PanoramaRequest * const q);
    PanoramaRequestPrivate(const PanoramaRequestPrivate &other, PanoramaRequest * const q);

    static QString toString(const PanoramaRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PanoramaRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
