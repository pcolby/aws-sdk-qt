// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBDOCUMENTREQUEST_H
#define QTAWS_GETJOBDOCUMENTREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetJobDocumentRequestPrivate;

class QTAWSIOT_EXPORT GetJobDocumentRequest : public IoTRequest {

public:
    GetJobDocumentRequest(const GetJobDocumentRequest &other);
    GetJobDocumentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobDocumentRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
