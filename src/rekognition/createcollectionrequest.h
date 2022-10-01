// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOLLECTIONREQUEST_H
#define QTAWS_CREATECOLLECTIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class CreateCollectionRequestPrivate;

class QTAWSREKOGNITION_EXPORT CreateCollectionRequest : public RekognitionRequest {

public:
    CreateCollectionRequest(const CreateCollectionRequest &other);
    CreateCollectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCollectionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
