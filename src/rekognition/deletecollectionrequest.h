// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOLLECTIONREQUEST_H
#define QTAWS_DELETECOLLECTIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteCollectionRequestPrivate;

class QTAWSREKOGNITION_EXPORT DeleteCollectionRequest : public RekognitionRequest {

public:
    DeleteCollectionRequest(const DeleteCollectionRequest &other);
    DeleteCollectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCollectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
