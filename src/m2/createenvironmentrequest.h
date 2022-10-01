// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTREQUEST_H
#define QTAWS_CREATEENVIRONMENTREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class CreateEnvironmentRequestPrivate;

class QTAWSM2_EXPORT CreateEnvironmentRequest : public M2Request {

public:
    CreateEnvironmentRequest(const CreateEnvironmentRequest &other);
    CreateEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentRequest)

};

} // namespace M2
} // namespace QtAws

#endif
