// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMDATAIDENTIFIERREQUEST_H
#define QTAWS_CREATECUSTOMDATAIDENTIFIERREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class CreateCustomDataIdentifierRequestPrivate;

class QTAWSMACIE2_EXPORT CreateCustomDataIdentifierRequest : public Macie2Request {

public:
    CreateCustomDataIdentifierRequest(const CreateCustomDataIdentifierRequest &other);
    CreateCustomDataIdentifierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomDataIdentifierRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
