// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMPROCESSORREQUEST_H
#define QTAWS_DELETESTREAMPROCESSORREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteStreamProcessorRequestPrivate;

class QTAWSREKOGNITION_EXPORT DeleteStreamProcessorRequest : public RekognitionRequest {

public:
    DeleteStreamProcessorRequest(const DeleteStreamProcessorRequest &other);
    DeleteStreamProcessorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStreamProcessorRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
