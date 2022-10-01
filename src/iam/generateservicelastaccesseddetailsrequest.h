// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATESERVICELASTACCESSEDDETAILSREQUEST_H
#define QTAWS_GENERATESERVICELASTACCESSEDDETAILSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GenerateServiceLastAccessedDetailsRequestPrivate;

class QTAWSIAM_EXPORT GenerateServiceLastAccessedDetailsRequest : public IamRequest {

public:
    GenerateServiceLastAccessedDetailsRequest(const GenerateServiceLastAccessedDetailsRequest &other);
    GenerateServiceLastAccessedDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateServiceLastAccessedDetailsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
