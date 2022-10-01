// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMDATAIDENTIFIERREQUEST_H
#define QTAWS_DELETECUSTOMDATAIDENTIFIERREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class DeleteCustomDataIdentifierRequestPrivate;

class QTAWSMACIE2_EXPORT DeleteCustomDataIdentifierRequest : public Macie2Request {

public:
    DeleteCustomDataIdentifierRequest(const DeleteCustomDataIdentifierRequest &other);
    DeleteCustomDataIdentifierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomDataIdentifierRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
