// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMREQUEST_H
#define QTAWS_CREATEHSMREQUEST_H

#include "cloudhsmv2request.h"

namespace QtAws {
namespace CloudHsmV2 {

class CreateHsmRequestPrivate;

class QTAWSCLOUDHSMV2_EXPORT CreateHsmRequest : public CloudHsmV2Request {

public:
    CreateHsmRequest(const CreateHsmRequest &other);
    CreateHsmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHsmRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
