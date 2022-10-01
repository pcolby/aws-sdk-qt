// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTRESOURCESTODRAFTAPPVERSIONREQUEST_P_H
#define QTAWS_IMPORTRESOURCESTODRAFTAPPVERSIONREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "importresourcestodraftappversionrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ImportResourcesToDraftAppVersionRequest;

class ImportResourcesToDraftAppVersionRequestPrivate : public ResilienceHubRequestPrivate {

public:
    ImportResourcesToDraftAppVersionRequestPrivate(const ResilienceHubRequest::Action action,
                                   ImportResourcesToDraftAppVersionRequest * const q);
    ImportResourcesToDraftAppVersionRequestPrivate(const ImportResourcesToDraftAppVersionRequestPrivate &other,
                                   ImportResourcesToDraftAppVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportResourcesToDraftAppVersionRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
