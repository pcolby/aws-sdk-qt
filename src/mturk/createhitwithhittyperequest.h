// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHITWITHHITTYPEREQUEST_H
#define QTAWS_CREATEHITWITHHITTYPEREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class CreateHITWithHITTypeRequestPrivate;

class QTAWSMTURK_EXPORT CreateHITWithHITTypeRequest : public MTurkRequest {

public:
    CreateHITWithHITTypeRequest(const CreateHITWithHITTypeRequest &other);
    CreateHITWithHITTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHITWithHITTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
