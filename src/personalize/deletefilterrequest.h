// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILTERREQUEST_H
#define QTAWS_DELETEFILTERREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DeleteFilterRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DeleteFilterRequest : public PersonalizeRequest {

public:
    DeleteFilterRequest(const DeleteFilterRequest &other);
    DeleteFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFilterRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
