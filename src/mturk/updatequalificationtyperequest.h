// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUALIFICATIONTYPEREQUEST_H
#define QTAWS_UPDATEQUALIFICATIONTYPEREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class UpdateQualificationTypeRequestPrivate;

class QTAWSMTURK_EXPORT UpdateQualificationTypeRequest : public MTurkRequest {

public:
    UpdateQualificationTypeRequest(const UpdateQualificationTypeRequest &other);
    UpdateQualificationTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQualificationTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
