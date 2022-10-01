// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTVERSIONREQUEST_H
#define QTAWS_DELETEPROJECTVERSIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteProjectVersionRequestPrivate;

class QTAWSREKOGNITION_EXPORT DeleteProjectVersionRequest : public RekognitionRequest {

public:
    DeleteProjectVersionRequest(const DeleteProjectVersionRequest &other);
    DeleteProjectVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProjectVersionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
