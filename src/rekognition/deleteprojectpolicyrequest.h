// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTPOLICYREQUEST_H
#define QTAWS_DELETEPROJECTPOLICYREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteProjectPolicyRequestPrivate;

class QTAWSREKOGNITION_EXPORT DeleteProjectPolicyRequest : public RekognitionRequest {

public:
    DeleteProjectPolicyRequest(const DeleteProjectPolicyRequest &other);
    DeleteProjectPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProjectPolicyRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
