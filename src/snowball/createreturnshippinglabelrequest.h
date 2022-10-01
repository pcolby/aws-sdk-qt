// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERETURNSHIPPINGLABELREQUEST_H
#define QTAWS_CREATERETURNSHIPPINGLABELREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class CreateReturnShippingLabelRequestPrivate;

class QTAWSSNOWBALL_EXPORT CreateReturnShippingLabelRequest : public SnowballRequest {

public:
    CreateReturnShippingLabelRequest(const CreateReturnShippingLabelRequest &other);
    CreateReturnShippingLabelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReturnShippingLabelRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
