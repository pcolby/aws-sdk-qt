// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROJECTVERSIONREQUEST_H
#define QTAWS_CREATEPROJECTVERSIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class CreateProjectVersionRequestPrivate;

class QTAWSREKOGNITION_EXPORT CreateProjectVersionRequest : public RekognitionRequest {

public:
    CreateProjectVersionRequest(const CreateProjectVersionRequest &other);
    CreateProjectVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProjectVersionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
