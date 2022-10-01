// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTMODELREQUEST_P_H
#define QTAWS_IMPORTMODELREQUEST_P_H

#include "comprehendrequest_p.h"
#include "importmodelrequest.h"

namespace QtAws {
namespace Comprehend {

class ImportModelRequest;

class ImportModelRequestPrivate : public ComprehendRequestPrivate {

public:
    ImportModelRequestPrivate(const ComprehendRequest::Action action,
                                   ImportModelRequest * const q);
    ImportModelRequestPrivate(const ImportModelRequestPrivate &other,
                                   ImportModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportModelRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
