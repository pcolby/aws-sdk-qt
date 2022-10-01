// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADENTITYDEFINITIONSREQUEST_P_H
#define QTAWS_UPLOADENTITYDEFINITIONSREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "uploadentitydefinitionsrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class UploadEntityDefinitionsRequest;

class UploadEntityDefinitionsRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    UploadEntityDefinitionsRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   UploadEntityDefinitionsRequest * const q);
    UploadEntityDefinitionsRequestPrivate(const UploadEntityDefinitionsRequestPrivate &other,
                                   UploadEntityDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UploadEntityDefinitionsRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
