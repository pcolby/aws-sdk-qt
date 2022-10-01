// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFACESREQUEST_H
#define QTAWS_DELETEFACESREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteFacesRequestPrivate;

class QTAWSREKOGNITION_EXPORT DeleteFacesRequest : public RekognitionRequest {

public:
    DeleteFacesRequest(const DeleteFacesRequest &other);
    DeleteFacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFacesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
