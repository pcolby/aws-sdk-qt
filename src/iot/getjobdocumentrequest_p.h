// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBDOCUMENTREQUEST_P_H
#define QTAWS_GETJOBDOCUMENTREQUEST_P_H

#include "iotrequest_p.h"
#include "getjobdocumentrequest.h"

namespace QtAws {
namespace IoT {

class GetJobDocumentRequest;

class GetJobDocumentRequestPrivate : public IoTRequestPrivate {

public:
    GetJobDocumentRequestPrivate(const IoTRequest::Action action,
                                   GetJobDocumentRequest * const q);
    GetJobDocumentRequestPrivate(const GetJobDocumentRequestPrivate &other,
                                   GetJobDocumentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobDocumentRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
