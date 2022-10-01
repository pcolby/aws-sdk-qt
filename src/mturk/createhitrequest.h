// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHITREQUEST_H
#define QTAWS_CREATEHITREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class CreateHITRequestPrivate;

class QTAWSMTURK_EXPORT CreateHITRequest : public MTurkRequest {

public:
    CreateHITRequest(const CreateHITRequest &other);
    CreateHITRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
