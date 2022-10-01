// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPLOADSTATUSREQUEST_P_H
#define QTAWS_GETUPLOADSTATUSREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "getuploadstatusrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetUploadStatusRequest;

class GetUploadStatusRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    GetUploadStatusRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   GetUploadStatusRequest * const q);
    GetUploadStatusRequestPrivate(const GetUploadStatusRequestPrivate &other,
                                   GetUploadStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUploadStatusRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
