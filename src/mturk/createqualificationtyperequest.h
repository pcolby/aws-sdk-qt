// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUALIFICATIONTYPEREQUEST_H
#define QTAWS_CREATEQUALIFICATIONTYPEREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class CreateQualificationTypeRequestPrivate;

class QTAWSMTURK_EXPORT CreateQualificationTypeRequest : public MTurkRequest {

public:
    CreateQualificationTypeRequest(const CreateQualificationTypeRequest &other);
    CreateQualificationTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateQualificationTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
