// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTPOLICIESREQUEST_H
#define QTAWS_LISTPROJECTPOLICIESREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class ListProjectPoliciesRequestPrivate;

class QTAWSREKOGNITION_EXPORT ListProjectPoliciesRequest : public RekognitionRequest {

public:
    ListProjectPoliciesRequest(const ListProjectPoliciesRequest &other);
    ListProjectPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProjectPoliciesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
