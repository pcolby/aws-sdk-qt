// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHITTYPEREQUEST_H
#define QTAWS_CREATEHITTYPEREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class CreateHITTypeRequestPrivate;

class QTAWSMTURK_EXPORT CreateHITTypeRequest : public MTurkRequest {

public:
    CreateHITTypeRequest(const CreateHITTypeRequest &other);
    CreateHITTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHITTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
